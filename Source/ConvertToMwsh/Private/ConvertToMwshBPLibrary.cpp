// Copyright Epic Games, Inc. All Rights Reserved.

#include "ConvertToMwshBPLibrary.h"
#include "ConvertToMwsh.h"
#include "MeshDescriptionClasses.h"
#include "ProceduralMeshConversion.h"
#include "StaticMeshDescription.h"
//#include "AssetRegistryModule.h"
#include "AssetRegistry/AssetRegistryModule.h"
#include "Engine/Classes/Engine/StaticMesh.h"
#include "ContentStreaming.h"
#include "UObject/Package.h"

UConvertToMwshBPLibrary::UConvertToMwshBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

float UConvertToMwshBPLibrary::ConvertToMwshSampleFunction(float Param)
{
	return -1;
}

UStaticMesh* UConvertToMwshBPLibrary::SaveProcMesh(UProceduralMeshComponent* ProcMesh, FString SavePath, FString SomeName)
{
  if (!ProcMesh)
    return nullptr;

  FString NewNameSuggestion = FString(TEXT("ProcMesh"));
  FString PackageName = SavePath;
  FString Name = FString(TEXT("NewStatMesh"));
    
    
  //FMeshDescription MeshDescription = BuildMeshDescription(ProcMesh);

  UPackage* Package = CreatePackage(nullptr, TEXT("/Game/Test/NewPackage"));
  // Set the flags for the package
  Package->SetPackageFlags(PKG_CompiledIn);

  // Save the package to disk
  FString Filename = FPackageName::LongPackageNameToFilename(TEXT("/Game/Test/NewPackage"), FPackageName::GetAssetPackageExtension());
  bool bSuccess = UPackage::SavePackage(Package, nullptr, RF_Standalone, *Filename, GError, nullptr, false, true, SAVE_NoError);
  if (!bSuccess)
  {
    UE_LOG(LogTemp, Error, TEXT("Failed to save package: %s"), *Filename);
  }else
  {
    UE_LOG(LogTemp, Display, TEXT("Package Path: %s"), *Filename);
  }
  check(Package);  
    
  // Create StaticMesh object
  //UStaticMesh* StaticMesh = NewObject<UStaticMesh>(Package, MeshName, RF_Public | RF_Standalone);
  
  FMeshDescription MeshDescription = BuildMeshDescription(ProcMesh);

  // If we got some valid data.
  if (MeshDescription.Polygons().Num() > 0)
  {
    // Create StaticMesh object
    FName MeshName(*FPackageName::GetLongPackageAssetName(TEXT("/Game/Test/NewPackage")));
    UStaticMesh* StaticMesh = NewObject<UStaticMesh>(Package, MeshName, RF_Public | RF_Standalone);
    StaticMesh->InitResources();

    StaticMesh->SetLightingGuid();

    // Add source to new StaticMesh
    auto Desc = StaticMesh->CreateStaticMeshDescription();
    Desc->SetMeshDescription(MeshDescription);
        // buildSimpleCol = false, cause it creates box collision based on mesh bounds or whatever :(
    StaticMesh->BuildFromStaticMeshDescriptions({ Desc }, false); 

    //// SIMPLE COLLISION
    if (!ProcMesh->bUseComplexAsSimpleCollision )
    {
      StaticMesh->CreateBodySetup();
      UBodySetup* NewBodySetup = StaticMesh->GetBodySetup();
      NewBodySetup->BodySetupGuid = FGuid::NewGuid();
      NewBodySetup->AggGeom.ConvexElems = ProcMesh->ProcMeshBodySetup->AggGeom.ConvexElems;
      NewBodySetup->bGenerateMirroredCollision = false;
      NewBodySetup->bDoubleSidedGeometry = true;
            // Play around with the flag below if you struggle with collision not working
      NewBodySetup->CollisionTraceFlag = CTF_UseDefault;
      NewBodySetup->CreatePhysicsMeshes();
    }
    
    /* Commented out cause I don't need it
    //// MATERIALS
    TSet<UMaterialInterface*> UniqueMaterials;
    const int32 NumSections = ProcMesh->GetNumSections();
    for (int32 SectionIdx = 0; SectionIdx < NumSections; SectionIdx++)
    {
      FProcMeshSection *ProcSection =
        ProcMesh->GetProcMeshSection(SectionIdx);
      UMaterialInterface *Material = ProcMesh->GetMaterial(SectionIdx);
      UniqueMaterials.Add(Material);
    }
    // Copy materials to new mesh
    for (auto* Material : UniqueMaterials)
    {
      StaticMesh->GetStaticMaterials().Add(FStaticMaterial(Material));
    }

    // Uncallable in game runtime
    // StaticMesh->Build(false);

    //return StaticMesh;*/
    return StaticMesh;
  }

  return nullptr;
}
	





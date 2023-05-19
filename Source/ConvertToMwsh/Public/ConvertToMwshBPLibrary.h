// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

//#include "ProceduralMeshComponentDetails.h"
#include "ProceduralMeshConversion.h"
#include "MeshDescriptionClasses.h"
#include "AssetRegistry/AssetRegistryModule.h"
//#include "AssetRegistryModule.h"
//#include "StaticMesh.h"
#include "MeshDescriptionBase.h"
#include "MeshDescription.h"

/*#include "ProceduralMeshComponent.h"
#include "MeshDescription.h"
#include "Modules/ModuleManager.h"
#include "Misc/PackageName.h"
#include "Widgets/SNullWidget.h"
#include "Widgets/DeclarativeSyntaxSupport.h"
#include "Application/SlateWindowHelper.h"
#include "Widgets/Text/STextBlock.h"
#include "Widgets/Input/SButton.h"
#include "Engine/StaticMesh.h"
//#include "IAssetTools.h"
//#include "AssetToolsModule.h"
#include "DetailLayoutBuilder.h"
#include "DetailWidgetRow.h"
#include "DetailCategoryBuilder.h"
#include "IDetailsView.h"
#include "StaticMeshAttributes.h"
#include "PhysicsEngine/BodySetup.h"
#include "Dialogs/DlgPickAssetPath.h"*/

#include "Misc/PackageName.h"
#include "ProceduralMeshComponent.h"
#include "Engine/StaticMesh.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ConvertToMwshBPLibrary.generated.h"

/* 
*	Function library class.
*	Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.
*
*	When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.
*	BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.
*	BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.
*	DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.
*				Its lets you name the node using characters not allowed in C++ function names.
*	CompactNodeTitle - the word(s) that appear on the node.
*	Keywords -	the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. 
*				Good example is "Print String" node which you can find also by using keyword "log".
*	Category -	the category your node will be under in the Blueprint drop-down menu.
*
*	For more info on custom blueprint nodes visit documentation:
*	https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation
*/
UCLASS()
class UConvertToMwshBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Execute Sample function", Keywords = "ConvertToMwsh sample test testing"), Category = "555")
	static float ConvertToMwshSampleFunction(float Param);
	
	UFUNCTION(BlueprintCallable,  Category = "555")
	static UStaticMesh* SaveProcMesh(UProceduralMeshComponent* ProcMesh, FString SavePath, FString SomeName);
};

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ConvertToMwsh/Public/ConvertToMwshBPLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConvertToMwshBPLibrary() {}
// Cross Module References
	CONVERTTOMWSH_API UClass* Z_Construct_UClass_UConvertToMwshBPLibrary_NoRegister();
	CONVERTTOMWSH_API UClass* Z_Construct_UClass_UConvertToMwshBPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ConvertToMwsh();
	PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UProceduralMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UConvertToMwshBPLibrary::execSaveProcMesh)
	{
		P_GET_OBJECT(UProceduralMeshComponent,Z_Param_ProcMesh);
		P_GET_PROPERTY(FStrProperty,Z_Param_SavePath);
		P_GET_PROPERTY(FStrProperty,Z_Param_SomeName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UStaticMesh**)Z_Param__Result=UConvertToMwshBPLibrary::SaveProcMesh(Z_Param_ProcMesh,Z_Param_SavePath,Z_Param_SomeName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConvertToMwshBPLibrary::execConvertToMwshSampleFunction)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Param);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UConvertToMwshBPLibrary::ConvertToMwshSampleFunction(Z_Param_Param);
		P_NATIVE_END;
	}
	void UConvertToMwshBPLibrary::StaticRegisterNativesUConvertToMwshBPLibrary()
	{
		UClass* Class = UConvertToMwshBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConvertToMwshSampleFunction", &UConvertToMwshBPLibrary::execConvertToMwshSampleFunction },
			{ "SaveProcMesh", &UConvertToMwshBPLibrary::execSaveProcMesh },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UConvertToMwshBPLibrary_ConvertToMwshSampleFunction_Statics
	{
		struct ConvertToMwshBPLibrary_eventConvertToMwshSampleFunction_Parms
		{
			float Param;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Param;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UConvertToMwshBPLibrary_ConvertToMwshSampleFunction_Statics::NewProp_Param = { "Param", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConvertToMwshBPLibrary_eventConvertToMwshSampleFunction_Parms, Param), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UConvertToMwshBPLibrary_ConvertToMwshSampleFunction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConvertToMwshBPLibrary_eventConvertToMwshSampleFunction_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConvertToMwshBPLibrary_ConvertToMwshSampleFunction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConvertToMwshBPLibrary_ConvertToMwshSampleFunction_Statics::NewProp_Param,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConvertToMwshBPLibrary_ConvertToMwshSampleFunction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConvertToMwshBPLibrary_ConvertToMwshSampleFunction_Statics::Function_MetaDataParams[] = {
		{ "Category", "555" },
		{ "DisplayName", "Execute Sample function" },
		{ "Keywords", "ConvertToMwsh sample test testing" },
		{ "ModuleRelativePath", "Public/ConvertToMwshBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConvertToMwshBPLibrary_ConvertToMwshSampleFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConvertToMwshBPLibrary, nullptr, "ConvertToMwshSampleFunction", nullptr, nullptr, sizeof(ConvertToMwshBPLibrary_eventConvertToMwshSampleFunction_Parms), Z_Construct_UFunction_UConvertToMwshBPLibrary_ConvertToMwshSampleFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConvertToMwshBPLibrary_ConvertToMwshSampleFunction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConvertToMwshBPLibrary_ConvertToMwshSampleFunction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConvertToMwshBPLibrary_ConvertToMwshSampleFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConvertToMwshBPLibrary_ConvertToMwshSampleFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConvertToMwshBPLibrary_ConvertToMwshSampleFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConvertToMwshBPLibrary_SaveProcMesh_Statics
	{
		struct ConvertToMwshBPLibrary_eventSaveProcMesh_Parms
		{
			UProceduralMeshComponent* ProcMesh;
			FString SavePath;
			FString SomeName;
			UStaticMesh* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProcMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProcMesh;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SavePath;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SomeName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConvertToMwshBPLibrary_SaveProcMesh_Statics::NewProp_ProcMesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConvertToMwshBPLibrary_SaveProcMesh_Statics::NewProp_ProcMesh = { "ProcMesh", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConvertToMwshBPLibrary_eventSaveProcMesh_Parms, ProcMesh), Z_Construct_UClass_UProceduralMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UConvertToMwshBPLibrary_SaveProcMesh_Statics::NewProp_ProcMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConvertToMwshBPLibrary_SaveProcMesh_Statics::NewProp_ProcMesh_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConvertToMwshBPLibrary_SaveProcMesh_Statics::NewProp_SavePath = { "SavePath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConvertToMwshBPLibrary_eventSaveProcMesh_Parms, SavePath), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConvertToMwshBPLibrary_SaveProcMesh_Statics::NewProp_SomeName = { "SomeName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConvertToMwshBPLibrary_eventSaveProcMesh_Parms, SomeName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConvertToMwshBPLibrary_SaveProcMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConvertToMwshBPLibrary_eventSaveProcMesh_Parms, ReturnValue), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConvertToMwshBPLibrary_SaveProcMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConvertToMwshBPLibrary_SaveProcMesh_Statics::NewProp_ProcMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConvertToMwshBPLibrary_SaveProcMesh_Statics::NewProp_SavePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConvertToMwshBPLibrary_SaveProcMesh_Statics::NewProp_SomeName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConvertToMwshBPLibrary_SaveProcMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConvertToMwshBPLibrary_SaveProcMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "555" },
		{ "ModuleRelativePath", "Public/ConvertToMwshBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConvertToMwshBPLibrary_SaveProcMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConvertToMwshBPLibrary, nullptr, "SaveProcMesh", nullptr, nullptr, sizeof(ConvertToMwshBPLibrary_eventSaveProcMesh_Parms), Z_Construct_UFunction_UConvertToMwshBPLibrary_SaveProcMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConvertToMwshBPLibrary_SaveProcMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConvertToMwshBPLibrary_SaveProcMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConvertToMwshBPLibrary_SaveProcMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConvertToMwshBPLibrary_SaveProcMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConvertToMwshBPLibrary_SaveProcMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UConvertToMwshBPLibrary_NoRegister()
	{
		return UConvertToMwshBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UConvertToMwshBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UConvertToMwshBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ConvertToMwsh,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UConvertToMwshBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UConvertToMwshBPLibrary_ConvertToMwshSampleFunction, "ConvertToMwshSampleFunction" }, // 22078246
		{ &Z_Construct_UFunction_UConvertToMwshBPLibrary_SaveProcMesh, "SaveProcMesh" }, // 334590014
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConvertToMwshBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/* \n*\x09""Function library class.\n*\x09""Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*\x09When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*\x09""BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*\x09""BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*\x09""DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*\x09\x09\x09\x09Its lets you name the node using characters not allowed in C++ function names.\n*\x09""CompactNodeTitle - the word(s) that appear on the node.\n*\x09Keywords -\x09the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. \n*\x09\x09\x09\x09Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*\x09""Category -\x09the category your node will be under in the Blueprint drop-down menu.\n*\n*\x09""For more info on custom blueprint nodes visit documentation:\n*\x09https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation\n*/" },
		{ "IncludePath", "ConvertToMwshBPLibrary.h" },
		{ "ModuleRelativePath", "Public/ConvertToMwshBPLibrary.h" },
		{ "ToolTip", "*      Function library class.\n*      Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*      When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*      BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*      BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*      DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*                              Its lets you name the node using characters not allowed in C++ function names.\n*      CompactNodeTitle - the word(s) that appear on the node.\n*      Keywords -      the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*                              Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*      Category -      the category your node will be under in the Blueprint drop-down menu.\n*\n*      For more info on custom blueprint nodes visit documentation:\n*      https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UConvertToMwshBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConvertToMwshBPLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UConvertToMwshBPLibrary_Statics::ClassParams = {
		&UConvertToMwshBPLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UConvertToMwshBPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UConvertToMwshBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UConvertToMwshBPLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UConvertToMwshBPLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UConvertToMwshBPLibrary, 2174289416);
	template<> CONVERTTOMWSH_API UClass* StaticClass<UConvertToMwshBPLibrary>()
	{
		return UConvertToMwshBPLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UConvertToMwshBPLibrary(Z_Construct_UClass_UConvertToMwshBPLibrary, &UConvertToMwshBPLibrary::StaticClass, TEXT("/Script/ConvertToMwsh"), TEXT("UConvertToMwshBPLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UConvertToMwshBPLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

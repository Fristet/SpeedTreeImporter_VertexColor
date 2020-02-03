// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpeedTreeImporter/Classes/SpeedTreeImportData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpeedTreeImportData() {}
// Cross Module References
	SPEEDTREEIMPORTER_API UEnum* Z_Construct_UEnum_SpeedTreeImporter_EImportLODType();
	UPackage* Z_Construct_UPackage__Script_SpeedTreeImporter();
	SPEEDTREEIMPORTER_API UEnum* Z_Construct_UEnum_SpeedTreeImporter_EImportGeometryType();
	SPEEDTREEIMPORTER_API UClass* Z_Construct_UClass_USpeedTreeImportData_NoRegister();
	SPEEDTREEIMPORTER_API UClass* Z_Construct_UClass_USpeedTreeImportData();
	ENGINE_API UClass* Z_Construct_UClass_UAssetImportData();
// End Cross Module References
	static UEnum* EImportLODType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SpeedTreeImporter_EImportLODType, Z_Construct_UPackage__Script_SpeedTreeImporter(), TEXT("EImportLODType"));
		}
		return Singleton;
	}
	template<> SPEEDTREEIMPORTER_API UEnum* StaticEnum<EImportLODType>()
	{
		return EImportLODType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EImportLODType(EImportLODType_StaticEnum, TEXT("/Script/SpeedTreeImporter"), TEXT("EImportLODType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SpeedTreeImporter_EImportLODType_Hash() { return 3908452723U; }
	UEnum* Z_Construct_UEnum_SpeedTreeImporter_EImportLODType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SpeedTreeImporter();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EImportLODType"), 0, Get_Z_Construct_UEnum_SpeedTreeImporter_EImportLODType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ILT_PaintedFoliage", (int64)ILT_PaintedFoliage },
				{ "ILT_IndividualActors", (int64)ILT_IndividualActors },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "/** LOD type **/" },
				{ "ILT_IndividualActors.DisplayName", "Individual Actors" },
				{ "ILT_IndividualActors.Name", "ILT_IndividualActors" },
				{ "ILT_PaintedFoliage.DisplayName", "Painted Foliage" },
				{ "ILT_PaintedFoliage.Name", "ILT_PaintedFoliage" },
				{ "ModuleRelativePath", "Classes/SpeedTreeImportData.h" },
				{ "ToolTip", "LOD type *" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SpeedTreeImporter,
				nullptr,
				"EImportLODType",
				"EImportLODType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EImportGeometryType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SpeedTreeImporter_EImportGeometryType, Z_Construct_UPackage__Script_SpeedTreeImporter(), TEXT("EImportGeometryType"));
		}
		return Singleton;
	}
	template<> SPEEDTREEIMPORTER_API UEnum* StaticEnum<EImportGeometryType>()
	{
		return EImportGeometryType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EImportGeometryType(EImportGeometryType_StaticEnum, TEXT("/Script/SpeedTreeImporter"), TEXT("EImportGeometryType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SpeedTreeImporter_EImportGeometryType_Hash() { return 4278727121U; }
	UEnum* Z_Construct_UEnum_SpeedTreeImporter_EImportGeometryType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SpeedTreeImporter();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EImportGeometryType"), 0, Get_Z_Construct_UEnum_SpeedTreeImporter_EImportGeometryType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "IGT_3D", (int64)IGT_3D },
				{ "IGT_Billboards", (int64)IGT_Billboards },
				{ "IGT_Both", (int64)IGT_Both },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "/** Geometry import type */" },
				{ "IGT_3D.DisplayName", "3D LODs" },
				{ "IGT_3D.Name", "IGT_3D" },
				{ "IGT_Billboards.DisplayName", "Billboards" },
				{ "IGT_Billboards.Name", "IGT_Billboards" },
				{ "IGT_Both.DisplayName", "Both" },
				{ "IGT_Both.Name", "IGT_Both" },
				{ "ModuleRelativePath", "Classes/SpeedTreeImportData.h" },
				{ "ToolTip", "Geometry import type" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SpeedTreeImporter,
				nullptr,
				"EImportGeometryType",
				"EImportGeometryType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void USpeedTreeImportData::StaticRegisterNativesUSpeedTreeImportData()
	{
	}
	UClass* Z_Construct_UClass_USpeedTreeImportData_NoRegister()
	{
		return USpeedTreeImportData::StaticClass();
	}
	struct Z_Construct_UClass_USpeedTreeImportData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IncludeSmoothLODCheck_MetaData[];
#endif
		static void NewProp_IncludeSmoothLODCheck_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IncludeSmoothLODCheck;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IncludeWindCheck_MetaData[];
#endif
		static void NewProp_IncludeWindCheck_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IncludeWindCheck;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IncludeVertexProcessingCheck_MetaData[];
#endif
		static void NewProp_IncludeVertexProcessingCheck_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IncludeVertexProcessingCheck;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IncludeSubsurface_MetaData[];
#endif
		static void NewProp_IncludeSubsurface_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IncludeSubsurface;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IncludeColorAdjustment_MetaData[];
#endif
		static void NewProp_IncludeColorAdjustment_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IncludeColorAdjustment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IncludeSpeedTreeAO_MetaData[];
#endif
		static void NewProp_IncludeSpeedTreeAO_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IncludeSpeedTreeAO;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IncludeBranchSeamSmoothing_MetaData[];
#endif
		static void NewProp_IncludeBranchSeamSmoothing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IncludeBranchSeamSmoothing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IncludeSpecularMapCheck_MetaData[];
#endif
		static void NewProp_IncludeSpecularMapCheck_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IncludeSpecularMapCheck;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IncludeDetailMapCheck_MetaData[];
#endif
		static void NewProp_IncludeDetailMapCheck_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IncludeDetailMapCheck;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IncludeNormalMapCheck_MetaData[];
#endif
		static void NewProp_IncludeNormalMapCheck_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IncludeNormalMapCheck;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MakeMaterialsCheck_MetaData[];
#endif
		static void NewProp_MakeMaterialsCheck_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_MakeMaterialsCheck;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IncludeCollision_MetaData[];
#endif
		static void NewProp_IncludeCollision_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IncludeCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LODType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImportGeometryType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ImportGeometryType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TreeScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TreeScale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpeedTreeImportData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetImportData,
		(UObject* (*)())Z_Construct_UPackage__Script_SpeedTreeImporter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpeedTreeImportData_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SpeedTreeImportData.h" },
		{ "ModuleRelativePath", "Classes/SpeedTreeImportData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeSmoothLODCheck_MetaData[] = {
		{ "Category", "Materials" },
		{ "Comment", "/**  */" },
		{ "DisplayName", "Include Smooth LOD" },
		{ "EditCondition", "IncludeVertexProcessingCheck" },
		{ "ModuleRelativePath", "Classes/SpeedTreeImportData.h" },
	};
#endif
	void Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeSmoothLODCheck_SetBit(void* Obj)
	{
		((USpeedTreeImportData*)Obj)->IncludeSmoothLODCheck = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeSmoothLODCheck = { "IncludeSmoothLODCheck", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USpeedTreeImportData), &Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeSmoothLODCheck_SetBit, METADATA_PARAMS(Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeSmoothLODCheck_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeSmoothLODCheck_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeWindCheck_MetaData[] = {
		{ "Category", "Materials" },
		{ "Comment", "/**  */" },
		{ "DisplayName", "Include Wind" },
		{ "EditCondition", "IncludeVertexProcessingCheck" },
		{ "ModuleRelativePath", "Classes/SpeedTreeImportData.h" },
	};
#endif
	void Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeWindCheck_SetBit(void* Obj)
	{
		((USpeedTreeImportData*)Obj)->IncludeWindCheck = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeWindCheck = { "IncludeWindCheck", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USpeedTreeImportData), &Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeWindCheck_SetBit, METADATA_PARAMS(Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeWindCheck_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeWindCheck_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeVertexProcessingCheck_MetaData[] = {
		{ "Category", "Materials" },
		{ "Comment", "/**  */" },
		{ "DisplayName", "Include Vertex Processing" },
		{ "EditCondition", "MakeMaterialsCheck" },
		{ "ModuleRelativePath", "Classes/SpeedTreeImportData.h" },
		{ "SpeedTreeVersion", "8" },
	};
#endif
	void Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeVertexProcessingCheck_SetBit(void* Obj)
	{
		((USpeedTreeImportData*)Obj)->IncludeVertexProcessingCheck = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeVertexProcessingCheck = { "IncludeVertexProcessingCheck", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USpeedTreeImportData), &Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeVertexProcessingCheck_SetBit, METADATA_PARAMS(Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeVertexProcessingCheck_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeVertexProcessingCheck_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeSubsurface_MetaData[] = {
		{ "Category", "Materials" },
		{ "Comment", "/**  */" },
		{ "DisplayName", "Include Subsurface" },
		{ "EditCondition", "MakeMaterialsCheck" },
		{ "ModuleRelativePath", "Classes/SpeedTreeImportData.h" },
		{ "SpeedTreeVersion", "8" },
	};
#endif
	void Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeSubsurface_SetBit(void* Obj)
	{
		((USpeedTreeImportData*)Obj)->IncludeSubsurface = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeSubsurface = { "IncludeSubsurface", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USpeedTreeImportData), &Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeSubsurface_SetBit, METADATA_PARAMS(Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeSubsurface_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeSubsurface_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeColorAdjustment_MetaData[] = {
		{ "Category", "Materials" },
		{ "Comment", "/**  */" },
		{ "DisplayName", "Include Random Color Variation" },
		{ "EditCondition", "MakeMaterialsCheck" },
		{ "ModuleRelativePath", "Classes/SpeedTreeImportData.h" },
	};
#endif
	void Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeColorAdjustment_SetBit(void* Obj)
	{
		((USpeedTreeImportData*)Obj)->IncludeColorAdjustment = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeColorAdjustment = { "IncludeColorAdjustment", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USpeedTreeImportData), &Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeColorAdjustment_SetBit, METADATA_PARAMS(Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeColorAdjustment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeColorAdjustment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeSpeedTreeAO_MetaData[] = {
		{ "Category", "Materials" },
		{ "Comment", "/**  */" },
		{ "DisplayName", "Include SpeedTree AO" },
		{ "EditCondition", "MakeMaterialsCheck" },
		{ "ModuleRelativePath", "Classes/SpeedTreeImportData.h" },
	};
#endif
	void Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeSpeedTreeAO_SetBit(void* Obj)
	{
		((USpeedTreeImportData*)Obj)->IncludeSpeedTreeAO = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeSpeedTreeAO = { "IncludeSpeedTreeAO", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USpeedTreeImportData), &Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeSpeedTreeAO_SetBit, METADATA_PARAMS(Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeSpeedTreeAO_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeSpeedTreeAO_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeBranchSeamSmoothing_MetaData[] = {
		{ "Category", "Materials" },
		{ "Comment", "/**  */" },
		{ "DisplayName", "Include Branch Seam Smoothing" },
		{ "EditCondition", "MakeMaterialsCheck" },
		{ "ModuleRelativePath", "Classes/SpeedTreeImportData.h" },
	};
#endif
	void Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeBranchSeamSmoothing_SetBit(void* Obj)
	{
		((USpeedTreeImportData*)Obj)->IncludeBranchSeamSmoothing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeBranchSeamSmoothing = { "IncludeBranchSeamSmoothing", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USpeedTreeImportData), &Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeBranchSeamSmoothing_SetBit, METADATA_PARAMS(Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeBranchSeamSmoothing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeBranchSeamSmoothing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeSpecularMapCheck_MetaData[] = {
		{ "Category", "Materials" },
		{ "Comment", "/**  */" },
		{ "DisplayName", "Include Specular Maps" },
		{ "EditCondition", "MakeMaterialsCheck" },
		{ "ModuleRelativePath", "Classes/SpeedTreeImportData.h" },
	};
#endif
	void Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeSpecularMapCheck_SetBit(void* Obj)
	{
		((USpeedTreeImportData*)Obj)->IncludeSpecularMapCheck = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeSpecularMapCheck = { "IncludeSpecularMapCheck", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USpeedTreeImportData), &Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeSpecularMapCheck_SetBit, METADATA_PARAMS(Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeSpecularMapCheck_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeSpecularMapCheck_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeDetailMapCheck_MetaData[] = {
		{ "Category", "Materials" },
		{ "Comment", "/**  */" },
		{ "DisplayName", "Include Detail Maps" },
		{ "EditCondition", "MakeMaterialsCheck" },
		{ "ModuleRelativePath", "Classes/SpeedTreeImportData.h" },
	};
#endif
	void Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeDetailMapCheck_SetBit(void* Obj)
	{
		((USpeedTreeImportData*)Obj)->IncludeDetailMapCheck = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeDetailMapCheck = { "IncludeDetailMapCheck", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USpeedTreeImportData), &Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeDetailMapCheck_SetBit, METADATA_PARAMS(Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeDetailMapCheck_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeDetailMapCheck_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeNormalMapCheck_MetaData[] = {
		{ "Category", "Materials" },
		{ "Comment", "/**  */" },
		{ "DisplayName", "Include Normal Maps" },
		{ "EditCondition", "MakeMaterialsCheck" },
		{ "ModuleRelativePath", "Classes/SpeedTreeImportData.h" },
	};
#endif
	void Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeNormalMapCheck_SetBit(void* Obj)
	{
		((USpeedTreeImportData*)Obj)->IncludeNormalMapCheck = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeNormalMapCheck = { "IncludeNormalMapCheck", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USpeedTreeImportData), &Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeNormalMapCheck_SetBit, METADATA_PARAMS(Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeNormalMapCheck_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeNormalMapCheck_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_MakeMaterialsCheck_MetaData[] = {
		{ "Category", "Materials" },
		{ "Comment", "/**  */" },
		{ "DisplayName", "Create Materials" },
		{ "ModuleRelativePath", "Classes/SpeedTreeImportData.h" },
		{ "SpeedTreeVersion", "8" },
	};
#endif
	void Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_MakeMaterialsCheck_SetBit(void* Obj)
	{
		((USpeedTreeImportData*)Obj)->MakeMaterialsCheck = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_MakeMaterialsCheck = { "MakeMaterialsCheck", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USpeedTreeImportData), &Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_MakeMaterialsCheck_SetBit, METADATA_PARAMS(Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_MakeMaterialsCheck_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_MakeMaterialsCheck_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeCollision_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/**  */" },
		{ "DisplayName", "Include Collision" },
		{ "ModuleRelativePath", "Classes/SpeedTreeImportData.h" },
		{ "SpeedTreeVersion", "8" },
	};
#endif
	void Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeCollision_SetBit(void* Obj)
	{
		((USpeedTreeImportData*)Obj)->IncludeCollision = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeCollision = { "IncludeCollision", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USpeedTreeImportData), &Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeCollision_SetBit, METADATA_PARAMS(Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_LODType_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Choose weather painted foliage or individual actor */" },
		{ "DisplayName", "LOD Setup" },
		{ "ModuleRelativePath", "Classes/SpeedTreeImportData.h" },
		{ "SpeedTreeVersion", "8" },
		{ "ToolTip", "Choose weather painted foliage or individual actor" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_LODType = { "LODType", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpeedTreeImportData, LODType), Z_Construct_UEnum_SpeedTreeImporter_EImportLODType, METADATA_PARAMS(Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_LODType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_LODType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_ImportGeometryType_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Choose weather to import as a 3D asset, billboard or both */" },
		{ "DisplayName", "Geometry" },
		{ "ModuleRelativePath", "Classes/SpeedTreeImportData.h" },
		{ "ToolTip", "Choose weather to import as a 3D asset, billboard or both" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_ImportGeometryType = { "ImportGeometryType", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpeedTreeImportData, ImportGeometryType), Z_Construct_UEnum_SpeedTreeImporter_EImportGeometryType, METADATA_PARAMS(Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_ImportGeometryType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_ImportGeometryType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_TreeScale_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Specify the tree scale */" },
		{ "DisplayName", "Tree Scale" },
		{ "ModuleRelativePath", "Classes/SpeedTreeImportData.h" },
		{ "ToolTip", "Specify the tree scale" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_TreeScale = { "TreeScale", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpeedTreeImportData, TreeScale), METADATA_PARAMS(Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_TreeScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_TreeScale_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USpeedTreeImportData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeSmoothLODCheck,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeWindCheck,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeVertexProcessingCheck,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeSubsurface,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeColorAdjustment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeSpeedTreeAO,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeBranchSeamSmoothing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeSpecularMapCheck,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeDetailMapCheck,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeNormalMapCheck,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_MakeMaterialsCheck,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_IncludeCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_LODType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_ImportGeometryType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpeedTreeImportData_Statics::NewProp_TreeScale,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpeedTreeImportData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpeedTreeImportData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USpeedTreeImportData_Statics::ClassParams = {
		&USpeedTreeImportData::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USpeedTreeImportData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USpeedTreeImportData_Statics::PropPointers),
		0,
		0x000810A4u,
		METADATA_PARAMS(Z_Construct_UClass_USpeedTreeImportData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USpeedTreeImportData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USpeedTreeImportData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USpeedTreeImportData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USpeedTreeImportData, 752166059);
	template<> SPEEDTREEIMPORTER_API UClass* StaticClass<USpeedTreeImportData>()
	{
		return USpeedTreeImportData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USpeedTreeImportData(Z_Construct_UClass_USpeedTreeImportData, &USpeedTreeImportData::StaticClass, TEXT("/Script/SpeedTreeImporter"), TEXT("USpeedTreeImportData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpeedTreeImportData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

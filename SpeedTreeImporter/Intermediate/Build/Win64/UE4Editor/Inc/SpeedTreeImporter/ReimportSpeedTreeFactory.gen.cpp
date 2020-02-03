// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpeedTreeImporter/Classes/ReimportSpeedTreeFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReimportSpeedTreeFactory() {}
// Cross Module References
	SPEEDTREEIMPORTER_API UClass* Z_Construct_UClass_UReimportSpeedTreeFactory_NoRegister();
	SPEEDTREEIMPORTER_API UClass* Z_Construct_UClass_UReimportSpeedTreeFactory();
	SPEEDTREEIMPORTER_API UClass* Z_Construct_UClass_USpeedTreeImportFactory();
	UPackage* Z_Construct_UPackage__Script_SpeedTreeImporter();
// End Cross Module References
	void UReimportSpeedTreeFactory::StaticRegisterNativesUReimportSpeedTreeFactory()
	{
	}
	UClass* Z_Construct_UClass_UReimportSpeedTreeFactory_NoRegister()
	{
		return UReimportSpeedTreeFactory::StaticClass();
	}
	struct Z_Construct_UClass_UReimportSpeedTreeFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReimportSpeedTreeFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USpeedTreeImportFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_SpeedTreeImporter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReimportSpeedTreeFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "ReimportSpeedTreeFactory.h" },
		{ "ModuleRelativePath", "Classes/ReimportSpeedTreeFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReimportSpeedTreeFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReimportSpeedTreeFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UReimportSpeedTreeFactory_Statics::ClassParams = {
		&UReimportSpeedTreeFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000020A0u,
		METADATA_PARAMS(Z_Construct_UClass_UReimportSpeedTreeFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UReimportSpeedTreeFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UReimportSpeedTreeFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UReimportSpeedTreeFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UReimportSpeedTreeFactory, 3342636180);
	template<> SPEEDTREEIMPORTER_API UClass* StaticClass<UReimportSpeedTreeFactory>()
	{
		return UReimportSpeedTreeFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UReimportSpeedTreeFactory(Z_Construct_UClass_UReimportSpeedTreeFactory, &UReimportSpeedTreeFactory::StaticClass, TEXT("/Script/SpeedTreeImporter"), TEXT("UReimportSpeedTreeFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReimportSpeedTreeFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

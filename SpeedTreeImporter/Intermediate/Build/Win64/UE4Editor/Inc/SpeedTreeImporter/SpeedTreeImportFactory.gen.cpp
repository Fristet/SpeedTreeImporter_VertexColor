// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpeedTreeImporter/Classes/SpeedTreeImportFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpeedTreeImportFactory() {}
// Cross Module References
	SPEEDTREEIMPORTER_API UClass* Z_Construct_UClass_USpeedTreeImportFactory_NoRegister();
	SPEEDTREEIMPORTER_API UClass* Z_Construct_UClass_USpeedTreeImportFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_SpeedTreeImporter();
// End Cross Module References
	void USpeedTreeImportFactory::StaticRegisterNativesUSpeedTreeImportFactory()
	{
	}
	UClass* Z_Construct_UClass_USpeedTreeImportFactory_NoRegister()
	{
		return USpeedTreeImportFactory::StaticClass();
	}
	struct Z_Construct_UClass_USpeedTreeImportFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpeedTreeImportFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_SpeedTreeImporter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpeedTreeImportFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "SpeedTreeImportFactory.h" },
		{ "ModuleRelativePath", "Classes/SpeedTreeImportFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpeedTreeImportFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpeedTreeImportFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USpeedTreeImportFactory_Statics::ClassParams = {
		&USpeedTreeImportFactory::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USpeedTreeImportFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USpeedTreeImportFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USpeedTreeImportFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USpeedTreeImportFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USpeedTreeImportFactory, 3218957762);
	template<> SPEEDTREEIMPORTER_API UClass* StaticClass<USpeedTreeImportFactory>()
	{
		return USpeedTreeImportFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USpeedTreeImportFactory(Z_Construct_UClass_USpeedTreeImportFactory, &USpeedTreeImportFactory::StaticClass, TEXT("/Script/SpeedTreeImporter"), TEXT("USpeedTreeImportFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpeedTreeImportFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

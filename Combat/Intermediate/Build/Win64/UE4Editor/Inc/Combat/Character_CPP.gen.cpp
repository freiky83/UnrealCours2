// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Combat/Character_CPP.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacter_CPP() {}
// Cross Module References
	COMBAT_API UClass* Z_Construct_UClass_ACharacter_CPP_NoRegister();
	COMBAT_API UClass* Z_Construct_UClass_ACharacter_CPP();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Combat();
// End Cross Module References
	void ACharacter_CPP::StaticRegisterNativesACharacter_CPP()
	{
	}
	UClass* Z_Construct_UClass_ACharacter_CPP_NoRegister()
	{
		return ACharacter_CPP::StaticClass();
	}
	struct Z_Construct_UClass_ACharacter_CPP_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACharacter_CPP_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Combat,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacter_CPP_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character_CPP.h" },
		{ "ModuleRelativePath", "Character_CPP.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACharacter_CPP_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACharacter_CPP>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACharacter_CPP_Statics::ClassParams = {
		&ACharacter_CPP::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACharacter_CPP_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacter_CPP_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACharacter_CPP()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACharacter_CPP_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACharacter_CPP, 313127708);
	template<> COMBAT_API UClass* StaticClass<ACharacter_CPP>()
	{
		return ACharacter_CPP::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACharacter_CPP(Z_Construct_UClass_ACharacter_CPP, &ACharacter_CPP::StaticClass, TEXT("/Script/Combat"), TEXT("ACharacter_CPP"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACharacter_CPP);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

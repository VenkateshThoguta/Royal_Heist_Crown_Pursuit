// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StealthActionGame/StealthActionthird.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStealthActionthird() {}
// Cross Module References
	STEALTHACTIONGAME_API UClass* Z_Construct_UClass_AStealthActionthird_NoRegister();
	STEALTHACTIONGAME_API UClass* Z_Construct_UClass_AStealthActionthird();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_StealthActionGame();
// End Cross Module References
	void AStealthActionthird::StaticRegisterNativesAStealthActionthird()
	{
	}
	UClass* Z_Construct_UClass_AStealthActionthird_NoRegister()
	{
		return AStealthActionthird::StaticClass();
	}
	struct Z_Construct_UClass_AStealthActionthird_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStealthActionthird_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_StealthActionGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStealthActionthird_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "StealthActionthird.h" },
		{ "ModuleRelativePath", "StealthActionthird.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStealthActionthird_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStealthActionthird>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AStealthActionthird_Statics::ClassParams = {
		&AStealthActionthird::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AStealthActionthird_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AStealthActionthird_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStealthActionthird()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AStealthActionthird_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AStealthActionthird, 999539162);
	template<> STEALTHACTIONGAME_API UClass* StaticClass<AStealthActionthird>()
	{
		return AStealthActionthird::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AStealthActionthird(Z_Construct_UClass_AStealthActionthird, &AStealthActionthird::StaticClass, TEXT("/Script/StealthActionGame"), TEXT("AStealthActionthird"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStealthActionthird);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

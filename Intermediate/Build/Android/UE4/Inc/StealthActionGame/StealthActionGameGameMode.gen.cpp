// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StealthActionGame/StealthActionGameGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStealthActionGameGameMode() {}
// Cross Module References
	STEALTHACTIONGAME_API UClass* Z_Construct_UClass_AStealthActionGameGameMode_NoRegister();
	STEALTHACTIONGAME_API UClass* Z_Construct_UClass_AStealthActionGameGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_StealthActionGame();
// End Cross Module References
	void AStealthActionGameGameMode::StaticRegisterNativesAStealthActionGameGameMode()
	{
	}
	UClass* Z_Construct_UClass_AStealthActionGameGameMode_NoRegister()
	{
		return AStealthActionGameGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AStealthActionGameGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStealthActionGameGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_StealthActionGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStealthActionGameGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "StealthActionGameGameMode.h" },
		{ "ModuleRelativePath", "StealthActionGameGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStealthActionGameGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStealthActionGameGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AStealthActionGameGameMode_Statics::ClassParams = {
		&AStealthActionGameGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AStealthActionGameGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AStealthActionGameGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStealthActionGameGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AStealthActionGameGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AStealthActionGameGameMode, 1242610784);
	template<> STEALTHACTIONGAME_API UClass* StaticClass<AStealthActionGameGameMode>()
	{
		return AStealthActionGameGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AStealthActionGameGameMode(Z_Construct_UClass_AStealthActionGameGameMode, &AStealthActionGameGameMode::StaticClass, TEXT("/Script/StealthActionGame"), TEXT("AStealthActionGameGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStealthActionGameGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

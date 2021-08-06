// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingRoom/BuildingRoomGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuildingRoomGameModeBase() {}
// Cross Module References
	BUILDINGROOM_API UClass* Z_Construct_UClass_ABuildingRoomGameModeBase_NoRegister();
	BUILDINGROOM_API UClass* Z_Construct_UClass_ABuildingRoomGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_BuildingRoom();
// End Cross Module References
	void ABuildingRoomGameModeBase::StaticRegisterNativesABuildingRoomGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ABuildingRoomGameModeBase_NoRegister()
	{
		return ABuildingRoomGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ABuildingRoomGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABuildingRoomGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingRoom,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildingRoomGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "BuildingRoomGameModeBase.h" },
		{ "ModuleRelativePath", "BuildingRoomGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABuildingRoomGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABuildingRoomGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABuildingRoomGameModeBase_Statics::ClassParams = {
		&ABuildingRoomGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ABuildingRoomGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildingRoomGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABuildingRoomGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABuildingRoomGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABuildingRoomGameModeBase, 491982458);
	template<> BUILDINGROOM_API UClass* StaticClass<ABuildingRoomGameModeBase>()
	{
		return ABuildingRoomGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABuildingRoomGameModeBase(Z_Construct_UClass_ABuildingRoomGameModeBase, &ABuildingRoomGameModeBase::StaticClass, TEXT("/Script/BuildingRoom"), TEXT("ABuildingRoomGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABuildingRoomGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

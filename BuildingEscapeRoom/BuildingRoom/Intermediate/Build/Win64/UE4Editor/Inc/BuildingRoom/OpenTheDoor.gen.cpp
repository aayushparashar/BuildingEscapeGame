// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingRoom/OpenTheDoor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOpenTheDoor() {}
// Cross Module References
	BUILDINGROOM_API UClass* Z_Construct_UClass_UOpenTheDoor_NoRegister();
	BUILDINGROOM_API UClass* Z_Construct_UClass_UOpenTheDoor();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_BuildingRoom();
// End Cross Module References
	void UOpenTheDoor::StaticRegisterNativesUOpenTheDoor()
	{
	}
	UClass* Z_Construct_UClass_UOpenTheDoor_NoRegister()
	{
		return UOpenTheDoor::StaticClass();
	}
	struct Z_Construct_UClass_UOpenTheDoor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOpenTheDoor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingRoom,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenTheDoor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "OpenTheDoor.h" },
		{ "ModuleRelativePath", "OpenTheDoor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOpenTheDoor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOpenTheDoor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOpenTheDoor_Statics::ClassParams = {
		&UOpenTheDoor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UOpenTheDoor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenTheDoor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOpenTheDoor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOpenTheDoor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOpenTheDoor, 1575151857);
	template<> BUILDINGROOM_API UClass* StaticClass<UOpenTheDoor>()
	{
		return UOpenTheDoor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOpenTheDoor(Z_Construct_UClass_UOpenTheDoor, &UOpenTheDoor::StaticClass, TEXT("/Script/BuildingRoom"), TEXT("UOpenTheDoor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOpenTheDoor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

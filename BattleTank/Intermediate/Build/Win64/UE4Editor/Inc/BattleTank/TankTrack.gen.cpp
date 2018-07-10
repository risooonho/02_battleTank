// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "BattleTank.h"
#include "Public/TankTrack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTankTrack() {}
// Cross Module References
	BATTLETANK_API UClass* Z_Construct_UClass_UTankTrack_NoRegister();
	BATTLETANK_API UClass* Z_Construct_UClass_UTankTrack();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent();
	UPackage* Z_Construct_UPackage__Script_BattleTank();
	BATTLETANK_API UFunction* Z_Construct_UFunction_UTankTrack_SetThrottle();
// End Cross Module References
	void UTankTrack::StaticRegisterNativesUTankTrack()
	{
		UClass* Class = UTankTrack::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetThrottle", &UTankTrack::execSetThrottle },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UTankTrack_SetThrottle()
	{
		struct TankTrack_eventSetThrottle_Parms
		{
			float Throttle;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Throttle = { UE4CodeGen_Private::EPropertyClass::Float, "Throttle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TankTrack_eventSetThrottle_Parms, Throttle), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Throttle,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Input" },
				{ "ModuleRelativePath", "Public/TankTrack.h" },
				{ "ToolTip", "Sets a throttle between -1 and +1" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UTankTrack, "SetThrottle", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(TankTrack_eventSetThrottle_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTankTrack_NoRegister()
	{
		return UTankTrack::StaticClass();
	}
	UClass* Z_Construct_UClass_UTankTrack()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UStaticMeshComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_BattleTank,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UTankTrack_SetThrottle, "SetThrottle" }, // 1682691350
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "HideCategories", "Object Activation Components|Activation Trigger" },
				{ "IncludePath", "TankTrack.h" },
				{ "ModuleRelativePath", "Public/TankTrack.h" },
				{ "ToolTip", "TankTrack is used to set maximum driving force, and to apply forces to the tank." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackMaxDrivingForce_MetaData[] = {
				{ "Category", "TankTrack" },
				{ "ModuleRelativePath", "Public/TankTrack.h" },
				{ "ToolTip", "Max force per track, in Newtons" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TrackMaxDrivingForce = { UE4CodeGen_Private::EPropertyClass::Float, "TrackMaxDrivingForce", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000010001, 1, nullptr, STRUCT_OFFSET(UTankTrack, TrackMaxDrivingForce), METADATA_PARAMS(NewProp_TrackMaxDrivingForce_MetaData, ARRAY_COUNT(NewProp_TrackMaxDrivingForce_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TrackMaxDrivingForce,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UTankTrack>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UTankTrack::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B01080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTankTrack, 3280101239);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTankTrack(Z_Construct_UClass_UTankTrack, &UTankTrack::StaticClass, TEXT("/Script/BattleTank"), TEXT("UTankTrack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTankTrack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

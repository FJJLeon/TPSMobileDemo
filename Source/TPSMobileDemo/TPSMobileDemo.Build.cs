// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class TPSMobileDemo : ModuleRules
{
	public TPSMobileDemo(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}

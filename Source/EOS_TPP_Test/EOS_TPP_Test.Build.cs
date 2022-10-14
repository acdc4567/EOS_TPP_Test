// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class EOS_TPP_Test : ModuleRules
{
	public EOS_TPP_Test(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}

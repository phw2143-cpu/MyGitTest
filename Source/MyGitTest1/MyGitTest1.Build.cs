// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class MyGitTest1 : ModuleRules
{
	public MyGitTest1(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}

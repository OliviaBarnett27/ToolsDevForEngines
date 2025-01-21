// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ToolsDevForEngines : ModuleRules
{
	public ToolsDevForEngines(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput", "PCG", "Niagara" });
	}
}

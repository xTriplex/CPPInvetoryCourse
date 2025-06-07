// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class CPPInventoryCourse : ModuleRules
{
	public CPPInventoryCourse(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"CPPInventoryCourse",
			"CPPInventoryCourse/Variant_Platforming",
			"CPPInventoryCourse/Variant_Combat",
			"CPPInventoryCourse/Variant_Combat/AI",
			"CPPInventoryCourse/Variant_SideScrolling",
			"CPPInventoryCourse/Variant_SideScrolling/Gameplay",
			"CPPInventoryCourse/Variant_SideScrolling/AI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}

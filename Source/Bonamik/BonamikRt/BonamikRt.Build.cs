using UnrealBuildTool;

public class BonamikRt : ModuleRules {
    public BonamikRt(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AnimGraphRuntime",
            "AnimationCore",
            "BonamikEd",
            "Core",
            "CoreUObject",
            "Engine",
        });
    }
}

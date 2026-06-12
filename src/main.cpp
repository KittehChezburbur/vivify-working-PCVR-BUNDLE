#include "beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "UnityEngine/AssetBundle.hpp"

// Log helper to see why PCVR bundles fail on Chromebook/Quest builds
void LogBundleInfo(StringW path) {
    auto bundle = UnityEngine::AssetBundle::LoadFromFile(path);
    if (!bundle) {
        // This usually triggers if the PCVR bundle is 'StandaloneWindows64' instead of 'Android'
        getLogger().error("VIVIFY: Failed to load PCVR bundle from %s. Check platform compatibility!", 
            to_utf8(csstrtostr(path)).c_str());
    } else {
        getLogger().info("VIVIFY: Bundle loaded successfully.");
    }
}

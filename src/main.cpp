#include "beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "UnityEngine/AssetBundle.hpp"
#include "UnityEngine/AssetBundleCreateRequest.hpp"

// Function to load the PCVR bundle on Quest
void LoadPCVRBundle(std::string path) {
    auto pathStr = il2cpp_utils::newcsstr(path);
    // On 1.40.8, we use the Async loader for better performance
    auto req = UnityEngine::AssetBundle::LoadFromFileAsync(pathStr);
    
    if (!req) {
        getLogger().error("Vivify: Could not find the bundle file!");
    }
}

#include "beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "UnityEngine/Shader.hpp"
#include "UnityEngine/Material.hpp"

// This replaces PC Shaders with Quest Shaders
void FixQuestMaterial(UnityEngine::Material* mat) {
    if (!mat) return;
    auto shader = mat->get_shader();
    if (shader) {
        std::string shaderName = to_utf8(csstrtostr(shader->get_name()));
        // If the shader is a PC shader, swap it to a Quest-lite version
        if (shaderName.find("Standard") != std::string::npos) {
            mat->set_shader(UnityEngine::Shader::Find(il2cpp_utils::newcsstr("BeatSaber/Oculus/Lite")));
        }
    }
}

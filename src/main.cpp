#include "modloader/shared/modloader.hpp"
#include "beatsaber-hook/shared/utils/logging.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils.hpp"

// Define the mod
static ModInfo modInfo; 

// Logger
Logger& getLogger() {
    static auto logger = new Logger(modInfo, LoggerOptions(false, true));
    return *logger;
}

// This runs when the mod is loaded by the game
extern "C" void setup(ModInfo& info) {
    info.id = "VivifyMod";
    info.version = "1.0.0";
    modInfo = info;
    
    getLogger().info("Vivify Mod Loading...");
}

// This runs when the game is initialized
extern "C" void load() {
    getLogger().info("Vivify Mod Initialized!");
}

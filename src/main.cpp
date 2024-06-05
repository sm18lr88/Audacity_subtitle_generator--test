#include "ExportLabels.h"
#include "PluginInterface.h"

extern "C" {
    EXPORT const char* GetPluginName() {
        return "Export Label Track to SRT";
    }

    EXPORT void ProcessLabels(const char* labelsFilePath, const char* outputFilePath) {
        ExportLabels::Process(labelsFilePath, outputFilePath);
    }
}

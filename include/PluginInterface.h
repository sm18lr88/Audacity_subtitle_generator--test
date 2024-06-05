#ifndef PLUGININTERFACE_H
#define PLUGININTERFACE_H

#ifdef _WIN32
#define EXPORT __declspec(dllexport)
#else
#define EXPORT
#endif

extern "C" {
    EXPORT const char* GetPluginName();
    EXPORT const char* GetPluginVersion();
    EXPORT void ProcessLabels(const char* labelsFilePath, const char* outputFilePath);
}

#endif // PLUGININTERFACE_H

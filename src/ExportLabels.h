#ifndef EXPORTLABELS_H
#define EXPORTLABELS_H

#include <string>

class ExportLabels {
public:
    static void Process(const std::string& labelsFilePath, const std::string& outputFilePath);

private:
    static std::string ConvertTimeFormat(double time);
};

#endif // EXPORTLABELS_H

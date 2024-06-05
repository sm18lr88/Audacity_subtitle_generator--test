#include "ExportLabels.h"
#include <fstream>
#include <sstream>
#include <iomanip>

void ExportLabels::Process(const std::string& labelsFilePath, const std::string& outputFilePath) {
    std::ifstream labelsFile(labelsFilePath);
    std::ofstream outputFile(outputFilePath);

    if (!labelsFile.is_open() || !outputFile.is_open()) {
        return;
    }

    std::string line;
    int index = 0;
    while (std::getline(labelsFile, line)) {
        std::istringstream iss(line);
        double startTime, endTime;
        std::string text;

        if (!(iss >> startTime >> endTime)) {
            continue;
        }

        std::getline(labelsFile, text);

        outputFile << ++index << "\n";
        outputFile << ConvertTimeFormat(startTime) << " --> " << ConvertTimeFormat(endTime) << "\n";
        outputFile << text << "\n\n";
    }
}

std::string ExportLabels::ConvertTimeFormat(double time) {
    int hours = static_cast<int>(time / 3600);
    int minutes = static_cast<int>((time - hours * 3600) / 60);
    int seconds = static_cast<int>(time) % 60;
    int milliseconds = static_cast<int>((time - static_cast<int>(time)) * 1000);

    std::ostringstream oss;
    oss << std::setw(2) << std::setfill('0') << hours << ":"
        << std::setw(2) << std::setfill('0') << minutes << ":"
        << std::setw(2) << std::setfill('0') << seconds << ","
        << std::setw(3) << std::setfill('0') << milliseconds;

    return oss.str();
}

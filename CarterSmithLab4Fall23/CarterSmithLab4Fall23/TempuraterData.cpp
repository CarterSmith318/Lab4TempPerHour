#include "header.hpp"
#include <fstream>
#include <sstream>

//This reads in the data
TemperatureData::TemperatureData(const std::string& filename) {
    std::ifstream inputFile(filename);
    std::string tempStr;

    if (inputFile.is_open()) {
        while (std::getline(inputFile, tempStr, ',')) {
            int temp;
            std::stringstream ss(tempStr);
            if (ss >> temp && temp >= -30 && temp <= 120) {
                temperatures.push_back(temp);
            }
        }
        inputFile.close();
    }
    else {
        std::cerr << "Error: Unable to open the file." << std::endl;
    }
}
//NA
void TemperatureData::processTemperatures() {
    // No processing needed for this example
}



//This displays the chart
void TemperatureData::displayChart() {
    std::cout << "Temperature Chart (each star represents a range of 3 degrees)" << std::endl;
    // MAde the chart numbers go by three
    for (int i = -30; i <= 120; i += 3) {
        std::cout << i << " | ";
        for (int temp : temperatures) {
            if (temp >= i && temp < i + 3) {
                std::cout << "*";
            }
        }
        std::cout << std::endl;
    }
}

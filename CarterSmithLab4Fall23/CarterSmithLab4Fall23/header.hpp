#ifndef TEMPERATUREDATA_HPP
#define TEMPERATUREDATA_HPP

#include <iostream>
#include <vector>

// Carter Smith
// Fall 2023 Python
// Lab 4
// 9/20/2023
// This program reads in a file of hourly temperature data (in Fahrenheit) and displays a chart of the data. USing * in 3 degree increments to display the data.
//(,) sepreation of data not new line

class TemperatureData {
private:
    std::vector<int> temperatures;

public:
    TemperatureData(const std::string& filename);
    void processTemperatures();
    void displayChart();
};

#endif // TEMPERATUREDATA_HPP

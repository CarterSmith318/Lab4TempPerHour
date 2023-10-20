#include "header.hpp"
//This is the main i wanted to see three files working together for this experiment. 
int main() {
    TemperatureData data("tempPerHour.dat");
    data.processTemperatures();
    data.displayChart();

    return 0;
}

#include <iostream>

void convertTemperature(double celsius, double result[2]) {
    double k = celsius + 273.15;
    double f = celsius * 1.80 + 32.00;

    result[0] = k;
    result[1] = f;
}

int main() {
    double celsius = 25.0;
    double results[2];

    convertTemperature(celsius, results);

    std::cout << "Celsius: " << celsius << std::endl;
    std::cout << "Kelvin: " << results[0] << std::endl;
    std::cout << "Fahrenheit: " << results[1] << std::endl;

    return 0;
}

//
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Declare variables
    double seaTemp, height, tempC, tempF;
    double zeroHeight;

    // Input sea-level temperature
    cout << "Enter sea-level temperature in Celsius: ";
    cin >> seaTemp;

    // Set output to two decimal places
    cout << fixed << setprecision(2);

    // Display sea-level temperature
    tempF = (seaTemp * 1.8) + 32;
    cout << "\nSea-level temperature: "
         << seaTemp << " C, " << tempF << " F" << endl;

    // Calculate temperatures at different heights
    for (int i = 1; i <= 3; i++) {
        height = i * 1000;
        tempC = seaTemp - (5.0 * height / 1000.0);
        tempF = (tempC * 1.8) + 32;

        cout << "\nHeight: " << height << " m"
             << " (" << height * 3.28 << " ft)" << endl;
        cout << "Temperature: " << tempC << " C, "
             << tempF << " F" << endl;
    }

    // Calculate temperature at Mount Everest
    height = 8848;
    tempC = seaTemp - (5.0 * height / 1000.0);
    tempF = (tempC * 1.8) + 32;

    cout << "\nMount Everest (8848 m)" << endl;
    cout << "Height in feet: " << height * 3.28 << " ft" << endl;
    cout << "Temperature: " << tempC << " C, "
         << tempF << " F" << endl;

    // Calculate the height at which temperature is 0 Celsius
    zeroHeight = (seaTemp / 5.0) * 1000.0;

    cout << "\nHeight where temperature is 0 C: "
         << zeroHeight << " m" << endl;
    cout << "Height in feet: "
         << zeroHeight * 3.28 << " ft" << endl;

    return 0;
}

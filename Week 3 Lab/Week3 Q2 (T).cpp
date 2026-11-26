//calculates the average rainfall for three months.
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    // Declare variables
    string month1, month2, month3;
    double rain1, rain2, rain3, average;

    // Input the first month and rainfall
    cout << "Enter the first month: ";
    cin >> month1;
    cout << "Enter rainfall in inches for " << month1 << ": ";
    cin >> rain1;

    // Input the second month and rainfall
    cout << "Enter the second month: ";
    cin >> month2;
    cout << "Enter rainfall in inches for "<< month2 << ": ";
    cin >> rain2;

    // Input the third month and rainfall
    cout << "Enter the third month: ";
    cin >> month3;
    cout << "Enter rainfall in inches for "<< month3 << ": ";
    cin >> rain3;

    // Calculate the average rainfall
    average = (rain1 + rain2 + rain3) / 3.0;

    // Display the average rainfall
    cout << fixed << setprecision(2);
    cout << "The average rainfall for "
         << month1 << ", " << month2 << " and " << month3
         << " is " << average << " inches." << endl;

    return 0;
}

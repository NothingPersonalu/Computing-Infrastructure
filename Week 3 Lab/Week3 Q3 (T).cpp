//Identify age by using the IC Number (Assumption: All IC cardholders were born earlier than the year 2000)
#include <iostream>
using namespace std;

int main()
{
    // Declare variables
    long long int ic;
    int birthYear, age;

    // Input the IC number
    cout << "Enter your 12-digit IC number: ";
    cin >> ic;

    // Extract the first six digits
    birthYear = (ic / 1000000) / 10000;

    // Calculate age, assuming the birth year is 1900 + YY
    age = 2026 - (1900 + birthYear);

    // Display the age
    cout << "Age: " << age << " years old" << endl;

    return 0;
}

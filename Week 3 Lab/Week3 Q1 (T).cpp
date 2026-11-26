//Calculate total calories consumed of cookies eaten
#include <iostream>
using namespace std;

int main()
{
    // Declare variables
    int cookiesEaten;
    double caloriesConsumed;

    // Input the number of cookies eaten
    cout << "Enter the number of cookies eaten: ";
    cin >> cookiesEaten;

    // Calculate total calories consumed
    
    caloriesConsumed = cookiesEaten * ((300.0 / 30.0) * 10.0);

    // Display the result
    cout << "Total calories consumed: " << caloriesConsumed << " calories" << endl;

    return 0;
}

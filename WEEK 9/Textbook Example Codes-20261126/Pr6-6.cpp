// This program demonstrates a function with a parameter.
#include <iostream>
using namespace std;

// Function Prototype
void displayValue(float);

int main()
{
	float num=8.57;
   cout << "I am passing 5 to displayValue.\n";
   displayValue(num);  // Call displayValue with argument 5
   cout << "Now I am back in main.\n";
   return 0;
}

//*********************************************************
// Definition of function displayValue.                   *
// It uses an integer parameter whose value is displayed. *
//*********************************************************

void displayValue(float num)
{
   cout << "The value is " << num << endl;
}
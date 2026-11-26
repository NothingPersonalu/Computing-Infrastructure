#include <iostream>
using namespace std;

int main()
{
	int number = 123456789;
	int rightMost = number % 10;
	
	cout << "The rightmost digit in "
	     << number << " is "
	     << rightMost << endl;
	return 0;
}

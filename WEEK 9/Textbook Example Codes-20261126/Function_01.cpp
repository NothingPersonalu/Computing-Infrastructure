#include <iostream>
using namespace std;

void welcome();

 int sum (int, int);


int main ()
{
	int a,b,c;
	
	welcome();
	
	cout << "Please enter the first operand:" <<endl;
	cin >> a;
	cout << "Please enter the second operand:" <<endl;
	cin >> b;
	
	cout << "main:"<< a << endl << b << endl;
	c=sum(a,b);
	
	cout <<"main:"<<  a << endl << b << endl << c << endl;
		
			
	cout<< "The sum of a and b is: " << c << endl;
	
	return 0;
}


void welcome()
{
	cout<<"Welcome to calculator"<< endl;
}

int sum (int x, int y)
{
	int z;
	cout <<"inside function sum " << endl;
	cout << x << endl << y << endl;
	z= x+y;
	cout << x << endl << y << endl << z << endl;
	
	return z;
}
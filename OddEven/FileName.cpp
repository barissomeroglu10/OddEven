/*

We will get a number from user.
According to the number our code will write odd/even numbers on the screen from 0 to the number.

Coder: Bar?? Somero?lu

Date: 12.11.23 / 00.05 a.m.

*/


#include <iostream>

using namespace std;

int main()
{
	int Number;

	cout << "Please Enter Number: ";
	cin >> Number;

	for ( int i = 0; i <= Number; i++)
	{

		if (i % 2 == 0)
		{
			cout << i << " is Even" << endl;
		}

		else
		{
			cout << i << " is Odd" << endl;
		}


	}



	return 0;
}
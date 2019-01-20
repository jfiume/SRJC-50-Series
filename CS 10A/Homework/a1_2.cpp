// Joe Fiume
// CS 10A
// Dave Harden
// 17 Jan 2019
// The following is a program that asks a user to enter a number of pounds, reads that value that the user typed, and then converts it to ounces and prints out the result.

#include <iostream>
using namespace std;

int main()
{
	int pounds;
	int ounces;

	cout << "enter pounds: ";
	cin >> pounds;
	ounces = pounds * 16;

	cout << pounds << " pounds is " << ounces << " ounces." << endl;
	system("pause");
}

/*
enter pounds: 5
5 pounds is 80 ounces.
Press any key to continue . . .
*/

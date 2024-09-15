// Classwork5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	cout << "size of short: " << sizeof(short) << endl;
	cout << "max value: " << numeric_limits<short>::max() << endl;
	cout << "min value: " << numeric_limits<short>::min() << endl;

	cout << "size of double: " << sizeof(double) << endl;
	cout << "max value: " << numeric_limits<double>::max() << endl;
	cout << "min value: " << numeric_limits<double>::min() << endl;
}



#include <iostream>
#include <string>

using namespace std;

#include "point.h"


int main() {
	Point p1;
	Point p2(1, 2);
	Point p3(3, 7);

	Point list[3];
	list[0] = p1;
	list[1] = p2;
	list[2] = p3;
	
	cout << "All points: " << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << list[i].convert() << endl;
	}

	cout << "\nResult of points summation: " << endl;
	Point result = p2 + p3;
	cout << p2.convert() << " + " << p3.convert() << " = " << result.convert() << endl;

	cout << "\nResult of points substraction: " << endl;
	result = p2 - p3;
	cout << p2.convert() << " - " << p3.convert() << " = " << result.convert() << endl;

	cout << "\nResult of multiplication point and value: " << endl;
	result = p2 * 5;
	cout << p2.convert() << " * 5 = " << result.convert() << endl;

	return 0;
}

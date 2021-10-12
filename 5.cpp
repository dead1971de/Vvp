#include <iostream>
#include <math.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "RUS");

	int y, x;

	cout << "Введите значение x : ";
	cin >> x;
	cout << endl << endl;

	y = 4 * pow((x - 3), 6) - 7 * pow((x - 3), 3) + 2;

	cout << "y = " << y << endl;

	
}	
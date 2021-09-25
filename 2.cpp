#include <iostream>
#include <math.h>

using namespace std;

void main()
{
	setlocale(LC_ALL, "RUS");

	const float P = 3.14;

	double D;

	cout << "Введите диаметр окружности: ";

	cin >> D;
	cout << endl;

	double L = P * D;

	cout << "Длина вашей окружности: " << L << endl;


}

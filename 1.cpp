#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	int a;
	float p = 3.14, rad;

	cout << "Введите градусное значение a : ";
	cin >> a;
	cout << endl;

	rad = a * p / 180;

	if (0 >= a, 360 <= a)
	{
		cout << "Введено некорректное значение." << endl;
	}
	else
	{
		cout << "Значение а в радианах : " << rad << endl;
	}
}


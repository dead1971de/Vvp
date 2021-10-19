#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	int a;
	float p = 3.14, grad;

	cout << "Введите радианное значение a : ";
	cin >> a;
	cout << endl;

	grad = 180 * a / p;

	if (0 >= a, 2 * p <= a)
	{
		cout << "Введено некорректное значение." << endl;
	}
	else
	{
		cout << "Значение а в градусах : " << grad << endl;
	}
}


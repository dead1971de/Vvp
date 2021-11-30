#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	int a;

	cout << "Введите целое число : ";
	cin >> a;

	if (a == 0)cout << "Нулевое число.";
	else
	{
		if (a > 0)cout << "Положительное ";
		else cout << "Отрицательное ";
		if (a % 2 == 0)cout << "четное число";
		else cout << "нечетное число";
	}
}

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	int n, i;
	float a, b = 0;
	cout << "Введите целое число (N>0): ";
	cin >> n;

	cout << "Введите вещественное число: ";
	cin >> a;

	for (i = 0; i <= n; i++) b = b + pow(a, i) * pow(-1, i);

	cout << "Результат: " << b;

	return 0;

}
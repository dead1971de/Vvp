#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	float n, a = 1, i;
	cout << "Введите целое число (N>0): ";
	cin >> n;

	for (i = 1.1; i <= 1 + n / 10; i += 0.1) a *= i;

	cout << "Результат: " << a;

	return 0;
}
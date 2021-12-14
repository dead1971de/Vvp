#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	float n, a = 1, i;
	cout << "Введите целое число (N>0): ";
	cin >> n;

	for (i = 1; i <= n; i++) a = a * (1 + i / 10);

	cout << "Результат: " << a;

	return 0;
}

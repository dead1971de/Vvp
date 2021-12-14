#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	float n, a = 0, i;
	cout << "Введите целое число (N>0): ";
	cin >> n;

	for (i = 1; i <= n; i++) {

		a = a + (i * 2 - 1);

		cout << a << endl;

	}

	cout << "Результат: " << a;

	return 0;
}
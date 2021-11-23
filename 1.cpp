#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");

    int a, b;

	cout << "Введите значения A (больше 2) и B (меньше или равно 3) : ";
	cin >> a >> b;

	if ((a > 2) && (b <= 3))
	{
		cout << "Выражение соблюдает условие";
	}
	else
	{
		cout << "Выражение не соблюдает условие";
	}
}

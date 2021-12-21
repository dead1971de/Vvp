#include <iostream>
using namespace std;

int Sign(int x)
{

	if (x == 0) return 0;

	if (x > 0) return 1;

	if (x < 0) return -1;

	return 0;
}

int main()
{
	setlocale(LC_ALL, "RUS");

	int a, b;

	cout << "Введите A: ";
	cin >> a;

	cout << "Введите B: ";
	cin >> b;

	cout << Sign(a) + Sign(b);
}
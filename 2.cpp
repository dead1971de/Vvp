#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");

    int A, B, C;

	cout << "Введите значения переменных A < B < C : ";
	cin >> A >> B >> C;

	if ((A < B) && (B < C))
	{
		cout << "Выражение верно." << endl;
	}
	else
	{
		cout << "Выражение неверно." << endl;
	}
}


#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	int A, B;

	cout << "Введите трехзначное число : ";
	cin >> A;
	cout << endl;

	B = (A % 100 / 10 * 100) + (A % 10) * 10 + A / 100;

	cout << "Ваше число при перестановке первой части в конец : " << B << endl;

}

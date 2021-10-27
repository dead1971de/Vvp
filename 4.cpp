#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	int A, B;

	cout << "Введите двузначное значение A : ";
	cin >> A;
	cout << endl;

	B = A / 10 + A % 10 * 10;

	cout << "Ваше число при перестановке : " << B << endl;

}
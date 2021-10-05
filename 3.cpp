#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	int A, B, C, AC, BC;

	cout << "Введите значение точек A , B , C : ";
	cin >> A >> B >> C;
	cout << endl;

	AC = abs(C - A);
	BC = abs(C - B);

	if (C < A , C > B)
	{
		cout << "Некорректное значение С.";
	}
	else
	{
		AC = abs(C - A);
		BC = abs(C - B);
		cout << "Произведение отрезков AC и BC : " << AC * BC << endl;
	}

	
}
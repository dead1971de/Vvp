#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	int A, B, C, S1, S2, M;
	
	cout << "Введите значения A, B, C : ";
	cin >> A >> B >> C;
	cout << endl;

	S1 = A * B;
	S2 = C * C;

	M = S1 / S2;

	cout << "Максимальное количество квадратов со стороной C в прямоугольнике A x B : " << M << endl;
	cout << "Площадь незанятой части : " << S1 - M * S2;
}

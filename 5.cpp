#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	double x1, y1, x2, y2, x3, y3, P, S, p, A, B, C;

	cout << "Введите координаты 3 вершин треугольника." << endl << "x1 , y1 : ";
	cin >> x1 >> y1;
	cout << "x2 , y2 : ";
	cin >> x2 >> y2;
	cout << "x3 , y3 : ";
	cin >> x3 >> y3;
	cout << endl;

	A = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
	B = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));
	C = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));
	P = A + B + C;

	p = P / 2;

	S = sqrt(p * (p - A) * (p - B) * (p - C));

	cout << "Периметр треугольника : " << P << endl << "Площадь прямоугольника : " << S << endl;

}      

#include <iostream>
#include <math.h>

using namespace std;

void main()
{
	setlocale(LC_ALL, "RUS");

	double a, b, S, P;
	

	cout << "Введите ширину и длину прямоугольника: ";
	cin >> a >> b;
	cout << endl;
	S = a * b;
	P = 2 * (a + b);

	if (a == b)
	{
		(cout << "Я просил прямоугольник, а не квадрат... \tПопробуй еще раз." << endl);
	}
	else
	{
		cout << "Площадь вашего прямоугольника = " << S << "\n";
		cout << "Периметр вашего прямоугольника =" << P << "\n";
	}

}
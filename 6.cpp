#include <iostream>
using namespace std;

int main()
{

	setlocale(LC_ALL, "RUS");

	float A1, A2, B1, B2, C1, C2, x, y, D1, D2, D3;

	cout << "Введите A1, B1, C1, A2 , B2, C2 : ";
	cin >> A1 >> B1 >> C1 >> A2 >> B2 >> C2;
	cout << endl;


	D2 = A1 * C2 - C1 * A2;

	D1 = A1 * B2 - A2 * B1;

	x = D2 / D1;

	D3 = C1 * B2 - B1 * C2;

	y = D3 / D1;

	if (y == -0) { y = 0; }
	if (x == -0) { x = 0; }

	cout << "X = " << x << endl << "Y = " << y << endl;

}

#include <iostream>
using namespace std;

float RingS(float r1, float r2) 
{
	r1 = 3.14 * r1 * r1;

	r2 = 3.14 * r2 * r2;

	return (r1 - r2);
}

int main()
{
	setlocale(LC_ALL, "RUS");

	float r1, r2, r3;

	cout << "Введите радиусы (r1>r2>r3): ";
	cin >> r1 >> r2 >> r3;

	cout << "r1 и r2: " << RingS(r1, r2) << endl;
	cout << "r2 и r3: " << RingS(r2, r3) << endl;
	cout << "r1 и r3: " << RingS(r1, r3) << endl;
}
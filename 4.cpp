#include <iostream>
#include<math.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "RUS");		
	int x,y;

	cout << "Введите значение x : ";
	cin >> x;
	cout << endl;
	cout << endl;

	y = 3 * pow(x, 6) - 6 * pow(x, 2) - 7;

	cout << "y = " << y << endl;
	

	


}
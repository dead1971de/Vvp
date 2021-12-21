#include <iostream>
using namespace std;

int Quarter(int x, int y) 
{
	if (x > 0) 
	{
		if (y > 0) return 1;

		else return 4;
	}
	else 
	{
		if (y > 0) return 2;

		else return 3;
	}
}

int main()
{
	setlocale(LC_ALL, "RUS");
	int x1, x2, x3, y1, y2, y3;

	cout << "Введите ненулевые координаты 3х точек (x1,y1,x2,y2,x3,y3): ";
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

	cout << "Первая точка: " << Quarter(x1, y1) << " четверть" << endl;
	cout << "Вторая точка: " << Quarter(x2, y2) << " четверть" << endl;
	cout << "Третья точка: " << Quarter(x3, y3) << " четверть" << endl;

}
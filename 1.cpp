#include <math.h>
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    int x1, y1, x2, y2, a, b;

    cout << "Даны 2 точки: A(x1, x2) ; B(y1, y2)" << endl;
    cout << endl;
    cout << "Введите их координаты, чтобы узнать расстояние между этими точками на плоскости: ";
    cin >> x1 >> x2 >> y1 >> y2;
    cout << endl;

    double AB = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

    cout << "Расстояние между точками A(" << x1 << "," << x2 << ")" << " и B(" << y1 << "," << y2 << "): " << AB << endl;
        


}


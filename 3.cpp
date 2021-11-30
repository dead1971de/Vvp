#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");

    float ax, ay, bx, by, cx, cy, ab, ac;

    cout << "Введите координаты точек a, b и с : ";

    cin >> ax >> ay >> bx >> by >> cx >> cy;

    ab = sqrt(pow(ax - bx, 2) + pow(ay - by, 2));

    ac = sqrt(pow(ax - cx, 2) + pow(ay - cy, 2));

    if (ab < ac)
    {
        cout << "Точка b ближе к точке a, расстояние = " << ab;
    }
    if (ab > ac)
    {
        cout << "Точка c ближе к точке a, расстояние = " << ac;
    }
    if (ab == ac)
    {
        cout << "Точки c и b находятся на одинаковом расстояние от точки а, расстояние = " << ab;
    }
}

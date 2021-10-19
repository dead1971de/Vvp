#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");

    int speed1, speed2, dist, findist, t, a, b;

    cout << "Введите скорость первой машины (км/ч) : ";
    cin >> speed1;
    cout << endl;

    cout << "Введите скорость второй машины (км/ч) : ";
    cin >> speed2;
    cout << endl;

    cout << "Введите расстояние между этими двумя машинами (км) : ";
    cin >> dist;
    cout << endl;

    cout << "Введите желаемое время в часах : ";
    cin >> t;
    cout << endl;

    a = t * speed1;
    b = t * speed2;

    findist = a + b + dist;

    cout << "Расстояние между данными двумя машинами через " << t << " часов : " << findist << endl;

}

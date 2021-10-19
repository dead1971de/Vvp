#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");

    int a, b;
    float x;

    cout << "Введите значение A : ";
    cin >> a;
    cout << endl;

    cout << "Введите значение B : ";
    cin >> b;
    cout << endl;

    if (a == 0) { cout << "Введено некорректное значение А."; }

    else
    {
        x = (float)-b / a;

        cout << a << " * x + " << b << " = 0" << endl;
        cout << a << " * x = " << -b << endl;
        cout << "x = " << -b << "/" << a << endl;
        cout << "x = " << x << endl;
    }
}

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");

    int A, B, C;

    cout << "Введите стороны прямоугольного треугольника A, B и C : ";
    cin >> A >> B >> C;

    if ((A == B + C) || (B == A + C) || (C == A + B))
    {
        cout << "Условие соблюдено.";
    }
    else
    {
        cout << "Условие не соблюдено.";
    }
}

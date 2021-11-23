#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");

    int A, B, C;

    cout << "Введите стороны треугольника A, B, C : ";
    cin >> A >> B >> C;

    if ((A + B > C) && (A + C > B) && (B + C > A))
    {
        cout << "Треугольник существует." << endl;
    }
    else
    {
        cout << "Треугольника не существует." << endl;
    }
}

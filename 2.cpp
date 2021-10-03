#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");

    float A, B, C, AC, BC;

    cout << "Введите A: ";
    cin >> A;
    cout << endl;

    cout << "Введите B: ";
    cin >> B;
    cout << endl;

    cout << "Введите C: ";
    cin >> C;
    cout << endl;


    AC = abs(C - A);
    BC = abs(C - B);

    cout << "Длина отрезка AC: " << AC;
    cout << "Длина отрезка BC: " << BC;
    cout << "Сумма отрезков AC и BC: " << AC + BC;
}

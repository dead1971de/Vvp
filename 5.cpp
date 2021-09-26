using namespace std;
#include <iostream>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "RUS");
    int a, b, sum, dif, prod;
    double quot;
    int Mnum_1 = 0, Mnum_2 = 0;


    cout << "Введите два ненулевых числа: ";
    cin >> a >> b;
    cout << endl;

    if (a < 0) { Mnum_1 = a * (-1); }

    else if (a > 0) { Mnum_1 = a; }

    else { cout << "число равно нулю задайте другое значение \n"; }

    if (b < 0) { Mnum_2 = b * (-1); }

    else if(b > 0) { Mnum_2 = b; }

    else { cout << "число равно нулю задайте другое значение \n"; }

    sum = Mnum_1 + Mnum_2;
    dif = Mnum_1 - Mnum_2;
    prod = Mnum_1 * Mnum_2;
    quot = (double)Mnum_1 / Mnum_2;

    cout << "Сумма модулей вших чисел: " << sum << endl << "Разность модулей ваших чисел: " << dif << endl << "Произведение модулей ваших чисел: " << prod << endl << "Частное модулей ваших чисел: " << quot << endl;
}

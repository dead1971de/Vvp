#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");

    int a, b;

    cout << " Введите 2 ненулевых числа: ";
    cin >> a >> b;
    cout << endl;

    if (a, b == 0)
    {
        cout << "Вы ввели недопустимое число, попробуйте еще раз.";
    }
    else
    {

        

        int sum = a * a + b * b;
        int sub = a * a - b * b;
        int multi = (a * a) * (b * b);
        double div = (double)(a * a) / (b * b);

        cout << "Сумма квадратов ваших чисел = " << sum << endl;
        cout << "Разность квадратов ваших чисел = " << sub << endl;
        cout << "Произведение квадратов ваших чисел = " << multi << endl;
        cout << "Частное квадратов ваших чисел = " << div << endl;
    }

}



#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");

    double A = 1000, B = 0, P;
    int K = 0;
    cout << "Введите значение переменной P в процентах (0 < P < 25) : ";
    cin >> P;

    while (A <= 1100)
    {
        B = A * (P / 100);
        K++;
        A += B;
    }

    cout << "Итоговый вклад : " << A << endl << "Количество месяцев через которое размер вклада превышает 1100 руб : " << K;

}


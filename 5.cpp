#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");

    int A;

    cout << "Введите четырехзначное число, которое будет читаться одинаково слева направо и справа налево : ";
    cin >> A;

    if (A % 10 == A / 1000 & A % 100 / 10 == A % 1000 / 100)
    {
        cout << "Условие соблюдено." << endl;
    }
    else
    {
        cout << "Условие не соблюдено." << endl;
    }
}

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");

    int A;

    cout << "Введите трехзначное число, состоящее из последовательности цифр по убыванию или возрастанию : ";
    cin >> A;

    if ((A / 100) > (A % 100 / 10) && (A % 100 / 10) > (A % 10) || (A / 100) < (A % 100 / 10) && (A % 100 / 10) < (A % 10))
    {
        cout << "Выражение верно." << endl;
    }
    else
    {
        cout << "Выражение неверно." << endl;
    }
}
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");

    int a;

    cout << "Введите число от 1 до 999 : ";
    cin >> a;

    if (a % 2 == 0) cout << "Четное ";
    else cout << "Нечетное ";
    if (a / 100 >= 1) cout << "трехзначное число";
    else if (a / 10 >= 1) cout << "двузначное число";
    else cout << "однозначное число";
}

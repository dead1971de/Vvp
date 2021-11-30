#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");

    int x, y;

    cout << "Введите x и y : ";

    cin >> x >> y;

    if (x == 0 || y == 0)cout << "Ошибка!1 точка лежит на координатной оси.";

    if (x > 0 && y > 0)cout << "Первая четверть.";
    if (x < 0 && y > 0)cout << "Вторая четверть.";
    if (x < 0 && y < 0)cout << "Третья четверть.";
    if (x > 0 && y < 0)cout << "Четвертая четверть.";
}


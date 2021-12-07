#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");

    int a, b, c = 0;

    cout << "Введите номер дня (от 1 до 31) и месяца (от 1 до 12) : ";
    cin >> a >> b;

    switch (b)
    {
    case 1:
        switch (a)
        {
        case 1:
            cout << "Первое ";
            break;

        case 2:
            cout << "Второе ";
            break;

        case 3:
            cout << "Третье ";
            break;

        case 4:
            cout << "Четвертое ";
            break;

        case 5:
            cout << "Пятое ";
            break;

        case 6:
            cout << "Шестое ";
            break;

        case 7:
            cout << "Седьмое ";
            break;

        case 8:
            cout << "Восьмое ";
            break;

        case 9:
            cout << "Девятое ";
            break;

        case 10:
            cout << "Десятое ";
            break;

        case 11:
            cout << "Одинадцатое ";
            break;

        case 12:
            cout << "Двенадцатое ";
            break;

        case 13:
            cout << "Тринадцатое ";
            break;

        case 14:
            cout << "Четырнадцатое ";
            break;

        case 15:
            cout << "Пятнадцатое ";
            break;

        case 16:
            cout << "Шестнадцатое ";
            break;

        case 17:
            cout << "Семнадцатое ";
            break;

        case 18:
            cout << "Восемнадцатое ";
            break;

        case 19:
            cout << "Девятнадцатое ";
            break;

        case 20:
            cout << "Двадцатое ";
            break;

        case 21:
            cout << "Двадцать первое ";
            break;

        case 22:
            cout << "Двадцать второе ";
            break;

        case 23:
            cout << "Двадцать третье ";
            break;

        case 24:
            cout << "Двадцать четвертое ";
            break;

        case 25:
            cout << "Двадцать пятое ";
            break;

        case 26:
            cout << "Двадцать шестое ";
            break;

        case 27:
            cout << "Двадцать седьмое ";
            break;

        case 28:
            cout << "Двадцать восьмое ";
            break;

        case 29:
            cout << "Двадцать девятое ";
            break;

        case 30:
            cout << "Тридцатое ";
            break;

        case 31:
            cout << "Тридцать первое ";
            break;
        }
        cout << "января ";
        break;

    case 2:
        switch (a)
        {
        case 1:
            cout << "Первое ";
            break;

        case 2:
            cout << "Второе ";
            break;

        case 3:
            cout << "Третье ";
            break;

        case 4:
            cout << "Четвертое ";
            break;

        case 5:
            cout << "Пятое ";
            break;

        case 6:
            cout << "Шестое ";
            break;

        case 7:
            cout << "Седьмое ";
            break;

        case 8:
            cout << "Восьмое ";
            break;

        case 9:
            cout << "Девятое ";
            break;

        case 10:
            cout << "Десятое ";
            break;

        case 11:
            cout << "Одинадцатое ";
            break;

        case 12:
            cout << "Двенадцатое ";
            break;

        case 13:
            cout << "Тринадцатое ";
            break;

        case 14:
            cout << "Четырнадцатое ";
            break;

        case 15:
            cout << "Пятнадцатое ";
            break;

        case 16:
            cout << "Шестнадцатое ";
            break;

        case 17:
            cout << "Семнадцатое ";
            break;

        case 18:
            cout << "Восемнадцатое ";
            break;

        case 19:
            cout << "Девятнадцатое ";
            break;

        case 20:
            cout << "Двадцатое ";
            break;

        case 21:
            cout << "Двадцать первое ";
            break;

        case 22:
            cout << "Двадцать второе ";
            break;

        case 23:
            cout << "Двадцать третье ";
            break;

        case 24:
            cout << "Двадцать четвертое ";
            break;

        case 25:
            cout << "Двадцать пятое ";
            break;

        case 26:
            cout << "Двадцать шестое ";
            break;

        case 27:
            cout << "Двадцать седьмое ";
            break;

        case 28:
            cout << "Двадцать восьмое ";
            break;

        default:
            cout << "Данный день не существует в этом месяце.";
            c += 1;
            break;
        }
        if (c != 0)
        {
            break;
        }
        cout << "февраля ";

        break;

    case 3:
        switch (a)
        {
        case 1:
            cout << "Первое ";
            break;

        case 2:
            cout << "Второе ";
            break;

        case 3:
            cout << "Третье ";
            break;

        case 4:
            cout << "Четвертое ";
            break;

        case 5:
            cout << "Пятое ";
            break;

        case 6:
            cout << "Шестое ";
            break;

        case 7:
            cout << "Седьмое ";
            break;

        case 8:
            cout << "Восьмое ";
            break;

        case 9:
            cout << "Девятое ";
            break;

        case 10:
            cout << "Десятое ";
            break;

        case 11:
            cout << "Одинадцатое ";
            break;

        case 12:
            cout << "Двенадцатое ";
            break;

        case 13:
            cout << "Тринадцатое ";
            break;

        case 14:
            cout << "Четырнадцатое ";
            break;

        case 15:
            cout << "Пятнадцатое ";
            break;

        case 16:
            cout << "Шестнадцатое ";
            break;

        case 17:
            cout << "Семнадцатое ";
            break;

        case 18:
            cout << "Восемнадцатое ";
            break;

        case 19:
            cout << "Девятнадцатое ";
            break;

        case 20:
            cout << "Двадцатое ";
            break;

        case 21:
            cout << "Двадцать первое ";
            break;

        case 22:
            cout << "Двадцать второе ";
            break;

        case 23:
            cout << "Двадцать третье ";
            break;

        case 24:
            cout << "Двадцать четвертое ";
            break;

        case 25:
            cout << "Двадцать пятое ";
            break;

        case 26:
            cout << "Двадцать шестое ";
            break;

        case 27:
            cout << "Двадцать седьмое ";
            break;

        case 28:
            cout << "Двадцать восьмое ";
            break;

        case 29:
            cout << "Двадцать девятое ";
            break;

        case 30:
            cout << "Тридцатое ";
            break;

        case 31:
            cout << "Тридцать первое ";
            break;
        }
        cout << "марта ";
        break;

    case 4:
        switch (a)
        {
        case 1:
            cout << "Первое ";
            break;

        case 2:
            cout << "Второе ";
            break;

        case 3:
            cout << "Третье ";
            break;

        case 4:
            cout << "Четвертое ";
            break;

        case 5:
            cout << "Пятое ";
            break;

        case 6:
            cout << "Шестое ";
            break;

        case 7:
            cout << "Седьмое ";
            break;

        case 8:
            cout << "Восьмое ";
            break;

        case 9:
            cout << "Девятое ";
            break;

        case 10:
            cout << "Десятое ";
            break;

        case 11:
            cout << "Одинадцатое ";
            break;

        case 12:
            cout << "Двенадцатое ";
            break;

        case 13:
            cout << "Тринадцатое ";
            break;

        case 14:
            cout << "Четырнадцатое ";
            break;

        case 15:
            cout << "Пятнадцатое ";
            break;

        case 16:
            cout << "Шестнадцатое ";
            break;

        case 17:
            cout << "Семнадцатое ";
            break;

        case 18:
            cout << "Восемнадцатое ";
            break;

        case 19:
            cout << "Девятнадцатое ";
            break;

        case 20:
            cout << "Двадцатое ";
            break;

        case 21:
            cout << "Двадцать первое ";
            break;

        case 22:
            cout << "Двадцать второе ";
            break;

        case 23:
            cout << "Двадцать третье ";
            break;

        case 24:
            cout << "Двадцать четвертое ";
            break;

        case 25:
            cout << "Двадцать пятое ";
            break;

        case 26:
            cout << "Двадцать шестое ";
            break;

        case 27:
            cout << "Двадцать седьмое ";
            break;

        case 28:
            cout << "Двадцать восьмое ";
            break;

        case 29:
            cout << "Двадцать девятое ";
            break;

        case 30:
            cout << "Тридцатое ";
            break;

        default:
            cout << "Данный день не существует в этом месяце.";
            c += 1;
            break;
        }
        if (c != 0)
        {
            break;
        }
        cout << "апреля ";
        break;

    case 5:
        switch (a)
        {
        case 1:
            cout << "Первое ";
            break;

        case 2:
            cout << "Второе ";
            break;

        case 3:
            cout << "Третье ";
            break;

        case 4:
            cout << "Четвертое ";
            break;

        case 5:
            cout << "Пятое ";
            break;

        case 6:
            cout << "Шестое ";
            break;

        case 7:
            cout << "Седьмое ";
            break;

        case 8:
            cout << "Восьмое ";
            break;

        case 9:
            cout << "Девятое ";
            break;

        case 10:
            cout << "Десятое ";
            break;

        case 11:
            cout << "Одинадцатое ";
            break;

        case 12:
            cout << "Двенадцатое ";
            break;

        case 13:
            cout << "Тринадцатое ";
            break;

        case 14:
            cout << "Четырнадцатое ";
            break;

        case 15:
            cout << "Пятнадцатое ";
            break;

        case 16:
            cout << "Шестнадцатое ";
            break;

        case 17:
            cout << "Семнадцатое ";
            break;

        case 18:
            cout << "Восемнадцатое ";
            break;

        case 19:
            cout << "Девятнадцатое ";
            break;

        case 20:
            cout << "Двадцатое ";
            break;

        case 21:
            cout << "Двадцать первое ";
            break;

        case 22:
            cout << "Двадцать второе ";
            break;

        case 23:
            cout << "Двадцать третье ";
            break;

        case 24:
            cout << "Двадцать четвертое ";
            break;

        case 25:
            cout << "Двадцать пятое ";
            break;

        case 26:
            cout << "Двадцать шестое ";
            break;

        case 27:
            cout << "Двадцать седьмое ";
            break;

        case 28:
            cout << "Двадцать восьмое ";
            break;

        case 29:
            cout << "Двадцать девятое ";
            break;

        case 30:
            cout << "Тридцатое ";
            break;

        case 31:
            cout << "Тридцать первое ";
            break;
        }
        cout << "мая ";
        break;

    case 6:
        switch (a)
        {
        case 1:
            cout << "Первое ";
            break;

        case 2:
            cout << "Второе ";
            break;

        case 3:
            cout << "Третье ";
            break;

        case 4:
            cout << "Четвертое ";
            break;

        case 5:
            cout << "Пятое ";
            break;

        case 6:
            cout << "Шестое ";
            break;

        case 7:
            cout << "Седьмое ";
            break;

        case 8:
            cout << "Восьмое ";
            break;

        case 9:
            cout << "Девятое ";
            break;

        case 10:
            cout << "Десятое ";
            break;

        case 11:
            cout << "Одинадцатое ";
            break;

        case 12:
            cout << "Двенадцатое ";
            break;

        case 13:
            cout << "Тринадцатое ";
            break;

        case 14:
            cout << "Четырнадцатое ";
            break;

        case 15:
            cout << "Пятнадцатое ";
            break;

        case 16:
            cout << "Шестнадцатое ";
            break;

        case 17:
            cout << "Семнадцатое ";
            break;

        case 18:
            cout << "Восемнадцатое ";
            break;

        case 19:
            cout << "Девятнадцатое ";
            break;

        case 20:
            cout << "Двадцатое ";
            break;

        case 21:
            cout << "Двадцать первое ";
            break;

        case 22:
            cout << "Двадцать второе ";
            break;

        case 23:
            cout << "Двадцать третье ";
            break;

        case 24:
            cout << "Двадцать четвертое ";
            break;

        case 25:
            cout << "Двадцать пятое ";
            break;

        case 26:
            cout << "Двадцать шестое ";
            break;

        case 27:
            cout << "Двадцать седьмое ";
            break;

        case 28:
            cout << "Двадцать восьмое ";
            break;

        case 29:
            cout << "Двадцать девятое ";
            break;

        case 30:
            cout << "Тридцатое ";
            break;

        default:
            cout << "Данный день не существует в этом месяце.";
            c += 1;
            break;
        }
        if (c != 0)
        {
            break;
        }
        cout << "июня ";
        break;

    case 7:
        switch (a)
        {
        case 1:
            cout << "Первое ";
            break;

        case 2:
            cout << "Второе ";
            break;

        case 3:
            cout << "Третье ";
            break;

        case 4:
            cout << "Четвертое ";
            break;

        case 5:
            cout << "Пятое ";
            break;

        case 6:
            cout << "Шестое ";
            break;

        case 7:
            cout << "Седьмое ";
            break;

        case 8:
            cout << "Восьмое ";
            break;

        case 9:
            cout << "Девятое ";
            break;

        case 10:
            cout << "Десятое ";
            break;

        case 11:
            cout << "Одинадцатое ";
            break;

        case 12:
            cout << "Двенадцатое ";
            break;

        case 13:
            cout << "Тринадцатое ";
            break;

        case 14:
            cout << "Четырнадцатое ";
            break;

        case 15:
            cout << "Пятнадцатое ";
            break;

        case 16:
            cout << "Шестнадцатое ";
            break;

        case 17:
            cout << "Семнадцатое ";
            break;

        case 18:
            cout << "Восемнадцатое ";
            break;

        case 19:
            cout << "Девятнадцатое ";
            break;

        case 20:
            cout << "Двадцатое ";
            break;

        case 21:
            cout << "Двадцать первое ";
            break;

        case 22:
            cout << "Двадцать второе ";
            break;

        case 23:
            cout << "Двадцать третье ";
            break;

        case 24:
            cout << "Двадцать четвертое ";
            break;

        case 25:
            cout << "Двадцать пятое ";
            break;

        case 26:
            cout << "Двадцать шестое ";
            break;

        case 27:
            cout << "Двадцать седьмое ";
            break;

        case 28:
            cout << "Двадцать восьмое ";
            break;

        case 29:
            cout << "Двадцать девятое ";
            break;

        case 30:
            cout << "Тридцатое ";
            break;

        case 31:
            cout << "Тридцать первое ";
            break;
        }
        cout << "июля ";
        break;

    case 8:
        switch (a)
        {
        case 1:
            cout << "Первое ";
            break;

        case 2:
            cout << "Второе ";
            break;

        case 3:
            cout << "Третье ";
            break;

        case 4:
            cout << "Четвертое ";
            break;

        case 5:
            cout << "Пятое ";
            break;

        case 6:
            cout << "Шестое ";
            break;

        case 7:
            cout << "Седьмое ";
            break;

        case 8:
            cout << "Восьмое ";
            break;

        case 9:
            cout << "Девятое ";
            break;

        case 10:
            cout << "Десятое ";
            break;

        case 11:
            cout << "Одинадцатое ";
            break;

        case 12:
            cout << "Двенадцатое ";
            break;

        case 13:
            cout << "Тринадцатое ";
            break;

        case 14:
            cout << "Четырнадцатое ";
            break;

        case 15:
            cout << "Пятнадцатое ";
            break;

        case 16:
            cout << "Шестнадцатое ";
            break;

        case 17:
            cout << "Семнадцатое ";
            break;

        case 18:
            cout << "Восемнадцатое ";
            break;

        case 19:
            cout << "Девятнадцатое ";
            break;

        case 20:
            cout << "Двадцатое ";
            break;

        case 21:
            cout << "Двадцать первое ";
            break;

        case 22:
            cout << "Двадцать второе ";
            break;

        case 23:
            cout << "Двадцать третье ";
            break;

        case 24:
            cout << "Двадцать четвертое ";
            break;

        case 25:
            cout << "Двадцать пятое ";
            break;

        case 26:
            cout << "Двадцать шестое ";
            break;

        case 27:
            cout << "Двадцать седьмое ";
            break;

        case 28:
            cout << "Двадцать восьмое ";
            break;

        case 29:
            cout << "Двадцать девятое ";
            break;

        case 30:
            cout << "Тридцатое ";
            break;

        case 31:
            cout << "Тридцать первое ";
            break;
        }
        cout << "августа ";
        break;

    case 9:
        switch (a)
        {
        case 1:
            cout << "Первое ";
            break;

        case 2:
            cout << "Второе ";
            break;

        case 3:
            cout << "Третье ";
            break;

        case 4:
            cout << "Четвертое ";
            break;

        case 5:
            cout << "Пятое ";
            break;

        case 6:
            cout << "Шестое ";
            break;

        case 7:
            cout << "Седьмое ";
            break;

        case 8:
            cout << "Восьмое ";
            break;

        case 9:
            cout << "Девятое ";
            break;

        case 10:
            cout << "Десятое ";
            break;

        case 11:
            cout << "Одинадцатое ";
            break;

        case 12:
            cout << "Двенадцатое ";
            break;

        case 13:
            cout << "Тринадцатое ";
            break;

        case 14:
            cout << "Четырнадцатое ";
            break;

        case 15:
            cout << "Пятнадцатое ";
            break;

        case 16:
            cout << "Шестнадцатое ";
            break;

        case 17:
            cout << "Семнадцатое ";
            break;

        case 18:
            cout << "Восемнадцатое ";
            break;

        case 19:
            cout << "Девятнадцатое ";
            break;

        case 20:
            cout << "Двадцатое ";
            break;

        case 21:
            cout << "Двадцать первое ";
            break;

        case 22:
            cout << "Двадцать второе ";
            break;

        case 23:
            cout << "Двадцать третье ";
            break;

        case 24:
            cout << "Двадцать четвертое ";
            break;

        case 25:
            cout << "Двадцать пятое ";
            break;

        case 26:
            cout << "Двадцать шестое ";
            break;

        case 27:
            cout << "Двадцать седьмое ";
            break;

        case 28:
            cout << "Двадцать восьмое ";
            break;

        case 29:
            cout << "Двадцать девятое ";
            break;

        case 30:
            cout << "Тридцатое ";
            break;

        default:
            cout << "Данный день не существует в этом месяце.";
            c += 1;
            break;
        }
        if (c != 0)
        {
            break;
        }
        cout << "сентября ";
        break;

    case 10:
        switch (a)
        {
        case 1:
            cout << "Первое ";
            break;

        case 2:
            cout << "Второе ";
            break;

        case 3:
            cout << "Третье ";
            break;

        case 4:
            cout << "Четвертое ";
            break;

        case 5:
            cout << "Пятое ";
            break;

        case 6:
            cout << "Шестое ";
            break;

        case 7:
            cout << "Седьмое ";
            break;

        case 8:
            cout << "Восьмое ";
            break;

        case 9:
            cout << "Девятое ";
            break;

        case 10:
            cout << "Десятое ";
            break;

        case 11:
            cout << "Одинадцатое ";
            break;

        case 12:
            cout << "Двенадцатое ";
            break;

        case 13:
            cout << "Тринадцатое ";
            break;

        case 14:
            cout << "Четырнадцатое ";
            break;

        case 15:
            cout << "Пятнадцатое ";
            break;

        case 16:
            cout << "Шестнадцатое ";
            break;

        case 17:
            cout << "Семнадцатое ";
            break;

        case 18:
            cout << "Восемнадцатое ";
            break;

        case 19:
            cout << "Девятнадцатое ";
            break;

        case 20:
            cout << "Двадцатое ";
            break;

        case 21:
            cout << "Двадцать первое ";
            break;

        case 22:
            cout << "Двадцать второе ";
            break;

        case 23:
            cout << "Двадцать третье ";
            break;

        case 24:
            cout << "Двадцать четвертое ";
            break;

        case 25:
            cout << "Двадцать пятое ";
            break;

        case 26:
            cout << "Двадцать шестое ";
            break;

        case 27:
            cout << "Двадцать седьмое ";
            break;

        case 28:
            cout << "Двадцать восьмое ";
            break;

        case 29:
            cout << "Двадцать девятое ";
            break;

        case 30:
            cout << "Тридцатое ";
            break;

        case 31:
            cout << "Тридцать первое ";
            break;
        }
        cout << "октября ";
        break;

    case 11:
        switch (a)
        {
        case 1:
            cout << "Первое ";
            break;

        case 2:
            cout << "Второе ";
            break;

        case 3:
            cout << "Третье ";
            break;

        case 4:
            cout << "Четвертое ";
            break;

        case 5:
            cout << "Пятое ";
            break;

        case 6:
            cout << "Шестое ";
            break;

        case 7:
            cout << "Седьмое ";
            break;

        case 8:
            cout << "Восьмое ";
            break;

        case 9:
            cout << "Девятое ";
            break;

        case 10:
            cout << "Десятое ";
            break;

        case 11:
            cout << "Одинадцатое ";
            break;

        case 12:
            cout << "Двенадцатое ";
            break;

        case 13:
            cout << "Тринадцатое ";
            break;

        case 14:
            cout << "Четырнадцатое ";
            break;

        case 15:
            cout << "Пятнадцатое ";
            break;

        case 16:
            cout << "Шестнадцатое ";
            break;

        case 17:
            cout << "Семнадцатое ";
            break;

        case 18:
            cout << "Восемнадцатое ";
            break;

        case 19:
            cout << "Девятнадцатое ";
            break;

        case 20:
            cout << "Двадцатое ";
            break;

        case 21:
            cout << "Двадцать первое ";
            break;

        case 22:
            cout << "Двадцать второе ";
            break;

        case 23:
            cout << "Двадцать третье ";
            break;

        case 24:
            cout << "Двадцать четвертое ";
            break;

        case 25:
            cout << "Двадцать пятое ";
            break;

        case 26:
            cout << "Двадцать шестое ";
            break;

        case 27:
            cout << "Двадцать седьмое ";
            break;

        case 28:
            cout << "Двадцать восьмое ";
            break;

        case 29:
            cout << "Двадцать девятое ";
            break;

        case 30:
            cout << "Тридцатое ";
            break;

        default:
            cout << "Данный день не существует в этом месяце.";
            c += 1;
            break;
        }
        if(c != 0)
        {
            break;
        }
        cout << "ноября ";
        break;

    case 12:
        switch (a)
        {
        case 1:
            cout << "Первое ";
            break;

        case 2:
            cout << "Второе ";
            break;

        case 3:
            cout << "Третье ";
            break;

        case 4:
            cout << "Четвертое ";
            break;

        case 5:
            cout << "Пятое ";
            break;

        case 6:
            cout << "Шестое ";
            break;

        case 7:
            cout << "Седьмое ";
            break;

        case 8:
            cout << "Восьмое ";
            break;

        case 9:
            cout << "Девятое ";
            break;

        case 10:
            cout << "Десятое ";
            break;

        case 11:
            cout << "Одинадцатое ";
            break;

        case 12:
            cout << "Двенадцатое ";
            break;

        case 13:
            cout << "Тринадцатое ";
            break;

        case 14:
            cout << "Четырнадцатое ";
            break;

        case 15:
            cout << "Пятнадцатое ";
            break;

        case 16:
            cout << "Шестнадцатое ";
            break;

        case 17:
            cout << "Семнадцатое ";
            break;

        case 18:
            cout << "Восемнадцатое ";
            break;

        case 19:
            cout << "Девятнадцатое ";
            break;

        case 20:
            cout << "Двадцатое ";
            break;

        case 21:
            cout << "Двадцать первое ";
            break;

        case 22:
            cout << "Двадцать второе ";
            break;

        case 23:
            cout << "Двадцать третье ";
            break;

        case 24:
            cout << "Двадцать четвертое ";
            break;

        case 25:
            cout << "Двадцать пятое ";
            break;

        case 26:
            cout << "Двадцать шестое ";
            break;

        case 27:
            cout << "Двадцать седьмое ";
            break;

        case 28:
            cout << "Двадцать восьмое ";
            break;

        case 29:
            cout << "Двадцать девятое ";
            break;

        case 30:
            cout << "Тридцатое ";
            break;

        case 31:
            cout << "Тридцать первое ";
            break;
        }
        cout << "декабря ";
        break;
    }
}


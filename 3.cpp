#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");

    int k, n, d;

    cout << "Введите значение k (от 1 до 365) : ";
    cin >> k;
    cout << endl;

    cout << "Введите значение n (от 1 до 7) : ";
    cin >> n;
    cout << endl;
        
    d = k % 7;

    d = d + n - 1;

    if (d >= 7)
    {
        d = d % 7 + 1;
    }

    switch (d)
    {
    case(0):

        cout << "День недели k дня : воскресенье.";

        break;

    case(1):

        cout << "День недели k дня : понедельник.";

        break;

    case(2):

        cout << "День недели k дня : вторник.";

        break;

    case(3):

        cout << "День недели k дня : среда.";

        break;

    case(4):

        cout << "День недели k дня : четверг.";

        break;

    case(5):

        cout << "День недели k дня : пятница.";

        break;

    case(6):

        cout << "День недели k дня : суббота.";

        break;
    }

}


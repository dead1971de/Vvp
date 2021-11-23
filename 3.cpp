#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");

    int A;

    cout << "Введите четное двузначное число : ";
    cin >> A;

    if ((A % 2 == 0) && (A < 100 && A > 9) || (A % 2 == 0) && (A > -100 && A < -9))
    {
        cout << "Выражение верно." << endl;
    }
    else
    {

        cout << "Выражение неверно.";
    }
}

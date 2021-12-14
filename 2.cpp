#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");

    int A, B;
    cout << "Введите значение переменных A и B (A > B) : ";
    cin >> A >> B;

    while (A >= 0)
    {
        A -= B;
    }
    cout << A + B;
}


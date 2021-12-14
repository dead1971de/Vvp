#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");

    int A, B;
    cout << "Введите значение A и B : ";
    cin >> A >> B;

    while (A != 0 && B != 0)
    {
        if (A > B)
        {
            A = A % B;
        }
        else
        {
            B = B % A;
        }
    }

    cout << "НОД : " << A + B;
}

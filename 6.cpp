#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    int A, A1;

    cout << "Введите значение A : ";
    cin >> A;
    cout << endl;

    A1 = A * A;

    A = A1 * A1;

    A1 = A * A;

    cout << A1;

}


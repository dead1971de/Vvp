#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RUS");

    int A, B, j, i;
    cout << "Введите значение переменных A и B (A < B) : ";
    cin >> A >> B;

    for (i = A; i <= B; ++i) 
    {
        for (j = 1; j <= i; ++j)
            cout << i << " ";
    }

}

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");

    int N;
    cout << "Введите чисор Фибоначчи : ";
    cin >> N;
    int A1 = 1, A2 = 1, A = 0, K = 3;
    while (A < N)
    {
        ++K;
        A = A2 + A1;
        A2 = A1;
        A1 = A;
    }
    cout << K;
}

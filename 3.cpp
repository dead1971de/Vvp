
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");

    int N, K = 0, A = 0;
    cout << "Введите значение переменной N (N > 1) : ";
    cin >> N;

    while (A < N)
    {
        ++K;
        A += K;
    }

    cout << K << " " << A;
}

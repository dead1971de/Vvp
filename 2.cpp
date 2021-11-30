#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");

    int A, B, C;
    
    cout << "Введите 3 числа : ";
    cin >> A >> B >> C;

    if (B <= C && B <= A) 
    {
        cout << A + C;
    }
    else if (A <= C && A <= B) 
    {
        cout << B + C;
    }
    else 
    {
        cout << B + A;
    }
}

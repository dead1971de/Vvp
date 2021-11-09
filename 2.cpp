#include <iostream>
using namespace std;

int main()
{
    int A, B, С;
    
    cout << "Введите A (должно быть больше B) : "; 
    cin >> A;
    cout << endl;

    cout << "Введите B : ";
    cin >> B;
    cout << endl;

    С = A / B;

    if (A == -A, B == -B)
    {
        cout << "Значение должно быть положительным.";
        return 0;
    }
    else
    {
        cout << "Максимальное количество отрезков B на отрезке A : " << С;
    }
}


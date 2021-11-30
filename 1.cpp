#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");

    int A, B;

    cout << "Введите значения A и B : ";
    cin >> A >> B;

    if (A == B)
    {
        A = 0;
        B = 0;
    }
    if (A > B)B = A;
    
    if (B > A)A = B;
    
    cout << A <<" "<< B; 
    
}

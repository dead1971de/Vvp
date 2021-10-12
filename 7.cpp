#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RUS");

    int A, A1, A2;
    
    cout << "Введите значение А : ";
    cin >> A;

    A1 = A * A * A;
    A2 = A1 * A1;
    A = A1 * A2 * A2;


    cout << A << endl;
 

}



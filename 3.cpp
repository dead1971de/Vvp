#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    int A, B, C, a, b, c;

    cout << "Введите значения A B и С : ";
    cin >> A >> B >> C;
    cout << endl;
    cout << "A = " << A << " B = " << B << " C = " << C << endl << endl;


    a = A;
    b = B;
    c = C;

    A = b;
    B = c;
    C = a;

    cout << "A = " << A << " B = " << B << " C = " << C << endl;
}
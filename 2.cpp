#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    int A, B, C;

    cout << "Введите значения A B и С : ";
    cin >> A >> B >> C;
    cout << endl;
    cout << "A = " << A << " B = " << B << " C = " << C << endl << endl;
    

    A = A + B + C;
    B = A - B - C;
    C = A - B - C;
    A = A - B - C;

    cout << "A = " << A << " B = " << B << " C = " << C << endl;
}


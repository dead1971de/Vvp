#include <iostream>
using namespace std;

int main()
{
    
    setlocale(LC_ALL, "RUS");

    float A1, A2, B1, B2, C1, C2, x, y;

    cout << "Введите A1, B1, C1, A2 , B2, C2 : ";
    cin >> A1 >> B1 >> C1 >> A2 >> B2 >> C2;
    cout << endl;

    y = (A1 * C2 - A2 * C1) / (A1 * B2 - A2 * B1);

    x = (C1 - B1 * y) / A1;

        cout << "X = " << x << endl << "Y = " << y << endl;


}

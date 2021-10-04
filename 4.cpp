#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a1, b1, a2, b2, P, S;
    
    cout << "Введите значения координат a1, b1 , a2 , b2" << endl;
    cin >> a1 >> b1 >> a2 >> b2;
    cout << endl;

    P = 2 * abs((a1 - a2) + (b1 - b2));
    S = abs((a1 - a2) * (b1 - b2));

    cout << "Периметр прямоугольника : " << P;
    cout << "Площадь прямоугольника : " << S;
}



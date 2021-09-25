#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");

    int a, b;
    

    cout << "Введите 2 числа: ";
    cin >> a >> b;
    float medium = (float)(a + b) / 2;

    cout << "Среднее арифметическое вашего числа: " << medium << endl;

}


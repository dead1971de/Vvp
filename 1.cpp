#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");

    float k = 0.001, b;

    cout << "Введите размер файла в байтах : ";
    cin >> b;
    cout << endl;

    cout << "Размер вашего файла в килобайтах : " << b * k << endl;


}

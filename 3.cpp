#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");

    int A, B;

    cout << "Введите А и B : ";
    cin >> A >> B; 
    cout << endl;

    cout << "Длина незанятой части А : " << A % B;
}

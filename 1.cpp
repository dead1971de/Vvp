#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");

    int n, x;

    cout << "Введите целое количество секунд : ";
    cin >> n; 
    cout << endl;

    x = n % 60;

    cout << "Количество секунд прошедших с начала последней минуты : " << x << endl;



}


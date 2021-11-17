#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");

    int a, b, c;
    
    cout << "Введите год : ";
    cin >> a;

    c = (a - 1) / 100 + 1;

    cout << "Номер столетия вашего года : " << c << endl;
}

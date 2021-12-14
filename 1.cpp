#include <iostream> 
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");

    float i,a;
    cout<<"Введите вещественное число: ";
    cin >> a;

    for (i = 0.1; i <= 1; i += 0.1) cout << "Стоимость " << i << " кг конфет =" << a * i << endl;; return 0;
}
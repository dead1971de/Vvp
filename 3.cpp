#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");

    int x, a, y;
    float cost, cost2;
    cout << "Введите вес конфет в кг : ";
    cin >> x;
    cout << endl;
  
    cout << "Введите цену в руб за " << x << " кг конфет : ";
    cin >> a;
    cout << endl;
 
    cost = (float)a / x;

    cout << "Введите кг конфет : ";
    cin >> y;
    cout << endl;

    cost2 = y * cost;

    
    cout << "Цена за 1кг конфет : " << cost << endl;
    cout << "Цена за " << y << "кг : " << cost2 << endl;

}

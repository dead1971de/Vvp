#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");

    int b;
    char a;
    cout << "Введите исходное направление(N, S, W, E) и посланную ему команду(0, 1, -1) : ";
    cin >> a >> b;

    switch (a)
    {
    case ('N') : 
        switch (b)
        {
        case 0 :
            cout << "Север.";
            break;

        case 1 :
            cout << "Запад.";
            break;

        case -1 :
            cout << "Восток.";
        }
        break;
     
    case ('S') :
        switch (b)
        {
        case 0:
            cout << "Юг.";
            break;

        case 1:
            cout << "Восток.";
            break;

        case -1:
            cout << "Запад.";
        }
            break;

    case ('W'):
        switch (b)
        {
        case 0:
            cout << "Запад.";
            break;

        case 1:
            cout << "Юг.";
            break;

        case -1:
            cout << "Север.";
        }
        break;

    case ('E'):
        switch (b)
        {
        case 0:
            cout << "Восток.";
            break;

        case 1:
            cout << "Север.";
            break;

        case -1:
            cout << "Юг.";
        }
        break;
    }
}

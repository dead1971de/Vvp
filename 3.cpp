#include <iostream>
using namespace std;

float RingS(float r1, float r2)
{
r1=3.14*r1*r1;
r2=3.14*r2*r2;

return (r1-r2);
}

int main()
{
setllocale(LC_ALL, "RUS");
float r1,r2,r3,r4,r5,r6;

cout << "Введите радиусы (r1>r2): ";
cin >> r1 >> r2;
cout >> "Введите радиусы (r3>r4): ";
cin >> r3 >> r4;
cout << "Введите радиусы (r5>r6): ";
cin >> r5 >> r6;

cout << "r1 и r2: " << RingS(r1,r2) << endl;
cout << "r3 и r4: " << RingS(r3,r4) << endl;
cout << "r5 и r6: " << RingS(r5,r6) << endl; 
}

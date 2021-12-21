#include <iostream>
using namespace std;

float Fact2(int N)
{
float a=1;

if (N%2!=0)
{
for (int i=1;i<=N;i=i+2) a=a*i;
}
	
else
{
for (int i=2;i<=N;i=i+2) a=a*i;
}
return a;
}

int main()
{
setlocale(LC_ALL,"RUS");
int n;

cout<<"Введите целое число N (N>0): ";
cin>>n;

cout<<"Двойной факториал числа N: "<<Fact2(n);
}

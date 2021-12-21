#include <iostream>
using namespace std;
float Power(float a, float b)
{
	b=a*a*a;
	return b; 
}
int main()
{
	cout<<Power(1,0)<<endl;
	cout<<Power(2,0)<<endl;
	cout<<Power(3,0)<<endl;
	cout<<Power(4,0)<<endl;
	cout<<Power(5,0)<<endl; 
}
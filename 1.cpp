#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");

	int A, B;
	

	cout << "Введите значения A и B: ";
	cin >> A >> B;
	cout << endl;

	cout << "A = " << A << endl << "B = " << B << endl << endl;
	
	swap(A, B);

	cout << "A = " << A << " B = " << B << endl;
}

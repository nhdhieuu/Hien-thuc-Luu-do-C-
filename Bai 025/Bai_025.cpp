#include <iostream>
using namespace std;
int main()
{
	float a,b;
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;
	float temp = a;
	a = b;
	b = temp;
	cout << "a= " << a<<" "<<"b= "<<b;
	return 1;
}
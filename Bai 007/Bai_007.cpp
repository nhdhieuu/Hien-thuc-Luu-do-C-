#include <iostream>
using namespace std;
int main()
{
	float f;
	cout << "Nhap f: ";
	cin >> f;
	float c = (float)5 / 9 * (f - 32); 
	cout << f << " do F " << "= " << c << " do C";
	return 1;
}
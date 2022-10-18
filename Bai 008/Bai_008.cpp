#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float r;
	cout << "Nhap r: ";
	cin >> r;
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float p = 2 * n * r * sin(3.14 / r);
	cout << "chu vi la: " << p;
	return 1;
}
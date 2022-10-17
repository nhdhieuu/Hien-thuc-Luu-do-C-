#include <iostream>
using namespace std;
int main()
{
	float x;
	int n;
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap n: ";
	cin >> n;
	float t = 1;
	int m = 1;
	int a = 1;
	float s = 0;
	int i = 1;
	while (i <= n)
	{
		t *= x;
		m *= i;
		a = -a;
		s += a * t / m;
		i++;
	}
	cout << s;
	//"tong cua day so S(" << x << "," << n << ") la: " <<
	return 0;
}
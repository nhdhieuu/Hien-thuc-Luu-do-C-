#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int hc = (n/10) % 10;
	cout << "chu so hang chuc la: " << hc;
	return 1;
}
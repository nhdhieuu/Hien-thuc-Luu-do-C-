#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int dem = 0;
	int t = n;
	while (t != 0)
	{
		dem++;
		t = t / 10;
	}
	cout << "so luong chu so la: " << dem;
	return 1;
}
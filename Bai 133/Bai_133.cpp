#include <iostream>
using namespace std;
int main()
{
	float a, b, c;
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;
	cout << "Nhap c: ";
	cin >> c;
	if (a + b > c && b + c > a && a + c > b)
	{
		if (a == b && b == c)
			cout << "tam giac deu";
		else
		{
			if (a* a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b)
			{
				if (a == b || b == c || a == c)
					cout << "tam giac vuong can";
				else
					cout << "tam giac vuong";

			}
			else
			{
				if (a == b || b == c || a == c)
					cout << "tam giac can";
				else
					cout << "tam giac thuong";
			}
		}
	}
	else
		cout << "khong phai tam giac";
	return 0;
}
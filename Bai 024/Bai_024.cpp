#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int ht = (n/100) % 10;
	cout << "chu so hang tram la: " << ht;
	return 1;
}
#include <iostream>
#include <cmath>
using namespace std;
//T�nh P = n!
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int sum = 1;
	for (int i = 1; i <= n; i++) {
		sum *= i;
	}
	cout << "Tong S= " << sum << endl;
}

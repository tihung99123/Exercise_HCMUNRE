#include <iostream>
#include <cmath>
using namespace std;
//Tính T = sin(1)/1 + sin(2)/2 +…+ sin(n)/n.
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		sum += sin(i) / i;
	}
	cout << "Tong S= " << sum << endl;
}

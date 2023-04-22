#include <iostream>
#include <cmath>
using namespace std;
//Tính T = sin(1)/12 - sin(2)/22 +…+ (-1)n+1 *sin(n)/n2
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		sum += pow(-1, i + 1) * sin(i) / pow(i, 2);
	}
	cout << "Tong S= " << sum << endl;
}

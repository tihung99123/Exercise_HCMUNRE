#include <iostream>
using namespace std;
//Tính tổng S = 4 + 6 + … + (2n + 2).
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		sum += 2 * i + 2;
	}
	cout << "Tong S= " << sum << endl;
}

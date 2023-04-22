#include <iostream>
using namespace std;
//Tính tổng S = 3 + 5 + … + (2n + 1).

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		sum += 2 * i + 1;
	}
	cout << "Tong S= " << sum << endl;
}

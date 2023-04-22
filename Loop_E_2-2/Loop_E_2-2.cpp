#include <iostream>
using namespace std;
//Tính tổng S = 2  + 4 + …+ 2n.
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		sum += 2 * i;
	}
	cout << "Tong S= " << sum << endl;
}

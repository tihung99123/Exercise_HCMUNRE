﻿#include <iostream>
using namespace std;
//Tính tổng S = 1 + 2 + 3 + … + n.
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		sum += i;
	}
	cout << "Tong S= " << sum << endl;
}

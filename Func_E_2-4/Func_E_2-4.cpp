#include <iostream>
using namespace std;
//Tính tổng S = 4 + 6 + … + (2n + 2).


int sum4(int n) {
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		sum += 2 * i + 2;
	}
	return sum;
}

int main()
{

	int sum = sum4(5);
	cout << "Tong: = " << sum << endl;
}
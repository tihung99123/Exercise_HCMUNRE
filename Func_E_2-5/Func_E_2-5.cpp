#include <iostream>
using namespace std;
//Tính tổng S = 1 + 3 + 5 + … + (2n - 1).


int sum5(int n) {
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		sum += 2 * i - 1;
	}
	return sum;
}

int main()
{

	int sum = sum5(5);
	cout << "Tong: = " << sum << endl;
}
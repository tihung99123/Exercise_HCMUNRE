#include <iostream>
using namespace std;
//Tính T = sin(1)/1 + sin(2)/2 +…+ sin(n)/n.


double sum6(int n) {
    double sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += sin(i) / i;
    }
    return sum;
}

int main()
{

	int sum = sum6(5);
	cout << "Tong: = " << sum << endl;
}
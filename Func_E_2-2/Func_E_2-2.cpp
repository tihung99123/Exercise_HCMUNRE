#include <iostream>
using namespace std;
//Tính tổng S = 2 + 4 + … + 2n.

int sum2(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += 2 * i;
    }
    return sum;
}

int main()
{

    int sum = sum2(5);
    cout << "Tong: = " << sum << endl;
}
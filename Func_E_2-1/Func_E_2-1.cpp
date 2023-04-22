#include <iostream>
using namespace std;
//Tính tổng S = 1 + 2 + 3 + … + n.

int sum1(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

int main()
{
    int sum = sum1(5);
    cout << "Tong: = " << sum << endl;
}

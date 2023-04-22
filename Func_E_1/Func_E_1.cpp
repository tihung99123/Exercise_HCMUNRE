#include <iostream>
using namespace std;

//Viết hàm tìm max 2 số, 4 số.

int max(int a, int b) {
    if (a > b) {
        return a;
    }
    else {
        return b;
    }
}

int max(int a, int b, int c, int d) {
    int max1 = max(a, b);
    int max2 = max(c, d);
    return max(max1, max2);
}

int main()
{
    int a = 5;
    int b = 10;
    int c = 15;
    int d = 20;

    cout << "So Lon Cua " << a << " Va " << b << " La " << max(a, b) << endl;
    cout << "So Lon Cua " << a << ", " << b << ", " << c << ", va " << d << " La " << max(a, b, c, d) << endl;

    return 0;
}

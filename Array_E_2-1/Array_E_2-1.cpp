#include <iostream>
using namespace std;

//Nhập, xuất mảng 2 chiều.

//Hàm nhập mảng 2d
void input(int arr[][100], int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << "Nhap a[" << i << "][" << j << "]= ";
            cin >> arr[i][j];
        }
    }
}

//Hàm xuất mảng 2d
void output(int arr[][100], int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}


int main() {
    int arr[100][100];
    int n, m;
    cout << "Nhap dong array2d: " << endl; cin >> n;
    cout << "Nhap cot array2d: " << endl; cin >> m;
    input(arr, n, m);
    output(arr, n, m);
}

#include <iostream>
using namespace std;

//kiểm tra tính chất mảng.

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

//Hàm kiểm tra tính chất mảng
bool isMatrix(int arr[][100], int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] < 0) {
                return false;
            }
        }
    }
    return true;
}


int main() {
    int arr[100][100];
    int n, m;
    cout << "Nhap dong array2d: " << endl; cin >> n;
    cout << "Nhap cot array2d: " << endl; cin >> m;
    input(arr, n, m);
    output(arr, n, m);

    //Kiểm tra tính chất ma trận
    if (isMatrix(arr, n, m)) {
        cout << "Ma tran vuong\n" << endl;
    }
    else {
        cout << "Ma tran khong vuong\n" << endl;
    }
}

#include <iostream>
using namespace std;

//Tìm giá trị nhỏ nhất/ lớn nhất của mảng.

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

//Hàm tìm giá trị lớn nhất trong mảng 2 chiều
int findMax(int arr[][MAX], int n, int m) {
    int maxVal = arr[0][0];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] > maxVal) {
                maxVal = arr[i][j];
            }
        }
    }
    return maxVal;
}

//Hàm tìm giá trị nhỏ nhất trong mảng 2 chiều
int findMin(int arr[][MAX], int n, int m) {
    int minVal = arr[0][0];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] < minVal) {
                minVal = arr[i][j];
            }
        }
    }
    return minVal;
}



int main() {
    int arr[100][100];
    int n, m;
    cout << "Nhap dong array2d: " << endl; cin >> n;
    cout << "Nhap cot array2d: " << endl; cin >> m;
    input(arr, n, m);
    output(arr, n, m);

    cout << "Gia tri lon nhat trong mang = " << findMax(arr, n, m) << endl;

    cout << "Gia tri nho nhat trong mang = " << findMin(arr, n, m) << endl;

}

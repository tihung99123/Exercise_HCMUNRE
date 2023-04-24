#include <iostream>
using namespace std;
//Tìm kiếm một phần tử trong mảng(dùng for và dùng while).

// Hàm sử dụng cấu trúc for
int searchFor(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i;
        }
    }
    return -1;
}

// Hàm sử dụng cấu trúc while
int searchWhile(int arr[], int n, int x) {
    int i = 0;
    while (i < n) {
        if (arr[i] == x) {
            return i;
        }
        i++;
    }
    return -1;
}

int main() {
    int n;
    cout << "Nhap so phan tu: ";
    cin >> n;
    int arr[1000];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int x;
    cout << "Nhap so can tim: ";
    cin >> x;
    int indexFor = searchFor(arr, n, x);
    int indexWhile = searchWhile(arr, n, x);
    cout << "So can tim " << x << " Su Dung For o index: " << indexFor << endl;
    cout << "So can tim " << x << " Su Dung While o index: " << indexWhile << endl;
    return 0;
}
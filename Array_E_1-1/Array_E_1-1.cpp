#include <iostream>
using namespace std;
//Nhập, xuất mảng.

void inputArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "arr[" << i << "]=";
        cin >> arr[i];
    }
}

void outputArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

int main()
{
    int n;
    cout << "Nhap So Phan Tu Vao Mang ";
    cin >> n;
    int arr[1000];
    inputArray(arr, n); //gọi hàm nhập mảng
    outputArray(arr, n); //gọi hàm xuất mảng
}

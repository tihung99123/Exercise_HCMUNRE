#include <iostream>
using namespace std;

//Tính tổng các phần tử trên dòng/ cột/ toàn ma trận/ đường chéo chính/ nửa trên/ nửa dưới.

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

//Hàm tính tổng các phần tử trên một dòng
int sumRow(int arr[][100], int row, int m) {
    int sum = 0;
    for (int j = 0; j < m; j++) {
        sum += arr[row][j];
    }
    return sum;
}

//Hàm tính tổng các phần tử trên một cột
int sumCol(int arr[][100], int col, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i][col];
    }
    return sum;
}

//Hàm tính tổng các phần tử trên toàn ma trận
int sumMatrix(int arr[][100], int n, int m) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            sum += arr[i][j];
        }
    }
    return sum;
}

//Hàm tính tổng các phần tử trên đường chéo chính
int sumMainDiagonal(int arr[][100], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i][i];
    }
    return sum;
}

//Hàm tính tổng các phần tử trên nửa trên ma trận
int sumUpperTriangle(int arr[][100], int n, int m) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < m; j++) {
            sum += arr[i][j];
        }
    }
    return sum;
}

//Hàm tính tổng các phần tử trên nửa dưới ma trận
int sumLowerTriangle(int arr[][100], int n, int m) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            sum += arr[i][j];
        }
    }
    return sum;
}


int main() {
    int arr[100][100];
    int n, m;
    cout << "Nhap dong array2d: " << endl; cin >> n;
    cout << "Nhap cot array2d: " << endl; cin >> m;
    input(arr, n, m);
    output(arr, n, m);

    int row;
    cout << "dong muon tinh tong?=> ";
    cin >> row;
    cout << "Tong cac phan tu tren dong " << row << " la: " << sumRow(arr, row, m) << endl;

    int col;
    cout << "cot muon tinh tong?=> ";
    cin >> col;
    cout << "Tong cac phan tu tren cot " << col << " la: " << sumCol(arr, col, n) << endl;

    cout << "Tong cac phan tu tren toan ma tran la: " << sumMatrix(arr, n, m) << endl;

    cout << "Tong cac phan tu tren duong cheo chinh la: " << sumMainDiagonal(arr, n) << endl;

    cout << "Tong cac phan tu tren nua tren ma tran la: " << sumUpperTriangle(arr, n, m) << endl;

    cout << "Tong cac phan tu tren nua duoi ma tran la: " << sumLowerTriangle(arr, n, m) << endl;
}

#include <iostream>
using namespace std;

//Tìm kiếm một phần tử trong mảng (dùng for và dùng while).

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

//Hàm tìm kiếm phần tử trong mảng 2 chiều (dùng vòng lặp for)
string searchFor(int arr[][100], int n, int m, int x) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] == x) {
                cout << "Gia tri " << x << " tai a[" << i << "][" << j << "]" << endl;
                return "True";
            }
        }
    }
    cout << "Khong tim thay gia tri " << x << " trong ma tran" << endl;
    return "False";
}

//Hàm tìm kiếm phần tử trong mảng 2 chiều (dùng vòng lặp while)
string searchWhile(int arr[][100], int n, int m, int x) {
    int i = 0, j = 0;
    while (i < n) {
        j = 0;
        while (j < m) {
            if (arr[i][j] == x) {
                cout << "Gia tri " << x << " tai a[" << i << "][" << j << "]" << endl;
                return "true";
            }
            j++;
        }
        i++;
    }
    cout << "Khong tim thay gia tri " << x << " trong ma tran" << endl;
    return "false";
}


int main() {
    int arr[100][100];
    int n, m;
    cout << "Nhap dong array2d: " << endl; cin >> n;
    cout << "Nhap cot array2d: " << endl; cin >> m;
    input(arr, n, m);
    output(arr, n, m);



    //Tìm kiếm một phần tử trong mảng (dùng for và dùng while)
    int x;
    cout << "\nNhap gia tri muon tim kiem: ";
    cin >> x;

    //Dùng for để tìm kiếm phần tử
    cout << "Ket qua tim kiem dung for: " << searchFor(arr, n, m, x) << endl;

    //Dùng while để tìm kiếm phần tử
    cout << "Ket qua tim kiem dung while: " << searchWhile(arr, n, m, x) << endl;
}

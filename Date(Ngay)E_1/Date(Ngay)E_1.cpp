#include <iostream>

using namespace std;

// xác định cấu trúc
struct DIEM {
    int ngay;
    int thang;
    int nam;
};

// Khai báo hàm chính
int main() {
    DIEM d1; // Khai báo cấu trúc DIEM
    d1.ngay = 27; // Gán giá trị cho các biến của nó
    d1.thang = 4;
    d1.nam = 2023;

    // In các giá trị của các cấu trúc DIEM
    cout << "Ngay: " << d1.ngay << endl;
    cout << "Thang: " << d1.thang << endl;
    cout << "Nam: " << d1.nam << endl;

    return 0;
}

#include <iostream>

//Nhập / Xuất ngày(ngày, tháng, năm).
using namespace std;

// Định nghĩa struct DIEM
struct DIEM {
    int ngay;
    int thang;
    int nam;
};

// Hàm nhập thông tin DIEM
void nhap(DIEM& d) {
    cout << "Nhap ngay: ";
    cin >> d.ngay;
    cout << "Nhap thang: ";
    cin >> d.thang;
    cout << "Nhap nam: ";
    cin >> d.nam;
}

// Hàm xuất thông tin DIEM
void xuat(DIEM d) {
    cout << d.ngay << "/" << d.thang << "/" << d.nam << endl;
}

// Hàm main
int main() {
    DIEM d;

    nhap(d);
    xuat(d);

    return 0;
}

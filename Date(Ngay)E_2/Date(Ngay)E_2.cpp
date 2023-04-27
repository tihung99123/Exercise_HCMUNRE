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

// Hàm check năm nhuận
bool nam_nhuan(int nam) {
    return (nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0);
}

// Hàm main
int main() {
    DIEM d;
    nhap(d);

    if (nam_nhuan(d.nam)) {
        cout << d.nam << " la nam nhuan" << endl;
    }
    else {
        cout << d.nam << " khong phai la nam nhuan" << endl;
    }

    return 0;
}

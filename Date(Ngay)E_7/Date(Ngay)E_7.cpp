#include <iostream>
#include <cmath>

//Tính khoảng cách giữa hai ngày
using namespace std;

struct DIEM {
    int ngay;
    int thang;
    int nam;
};

bool nam_nhuan(int nam) {
    return (nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0);
}

int so_thu_tu_ngay_tu_1_1_1(DIEM d) {
    int so_ngay_trong_thang[] = { 31, 28 + nam_nhuan(d.nam), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    int so_ngay = 0;
    for (int i = 1; i < d.nam; i++) {
        so_ngay += 365 + nam_nhuan(i);
    }
    for (int i = 0; i < d.thang - 1; i++) {
        so_ngay += so_ngay_trong_thang[i];
    }
    so_ngay += d.ngay - 1;
    return so_ngay;
}

int khoang_cach_ngay(DIEM d1, DIEM d2) {
    int so_ngay1 = so_thu_tu_ngay_tu_1_1_1(d1);
    int so_ngay2 = so_thu_tu_ngay_tu_1_1_1(d2);
    return abs(so_ngay1 - so_ngay2);
}

int main() {
    DIEM d1, d2;
    cout << "Nhap ngay thu nhat (ngay, thang, nam): ";
    cin >> d1.ngay >> d1.thang >> d1.nam;
    cout << "Nhap ngay thu hai (ngay, thang, nam): ";
    cin >> d2.ngay >> d2.thang >> d2.nam;

    cout << "Khoang cach ngay giua 2 ngay la: " << khoang_cach_ngay(d1, d2) << endl;

    return 0;
}

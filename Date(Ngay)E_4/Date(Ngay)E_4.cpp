#include <iostream>

//Tính số thứ tự ngày trong năm
using namespace std;

struct DIEM {
    int ngay;
    int thang;
    int nam;
};

bool nam_nhuan(int nam) {
    return (nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0);
}

int so_thu_tu_ngay(DIEM d) {
    int so_ngay_trong_thang[] = { 31, 28 + nam_nhuan(d.nam), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    int so_ngay = d.ngay;
    for (int i = 0; i < d.thang - 1; i++) {
        so_ngay += so_ngay_trong_thang[i];
    }
    return so_ngay;
}

int main() {
    DIEM d;
    cout << "Nhap ngay: ";
    cin >> d.ngay;
    cout << "Nhap thang: ";
    cin >> d.thang;
    cout << "Nhap nam: ";
    cin >> d.nam;

    cout << "Ngay " << d.ngay << "/" << d.thang << "/" << d.nam << " thuoc ngay thu " << so_thu_tu_ngay(d) << " trong nam." << endl;

    return 0;
}

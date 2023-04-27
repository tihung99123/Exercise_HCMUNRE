#include <iostream>

//Tính số thứ tự ngày kể từ ngày 1 / 1 / 1.
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

int main() {
    DIEM d;
    std::cout << "Nhap ngay: ";
    std::cin >> d.ngay;
    std::cout << "Nhap thang: ";
    std::cin >> d.thang;
    std::cout << "Nhap nam: ";
    std::cin >> d.nam;
    std::cout << "So thu tu ngay tu 1/1/1 den ngay " << d.ngay << "/" << d.thang << "/" << d.nam << " la: " << so_thu_tu_ngay_tu_1_1_1(d) << std::endl;
    return 0;
}

#include <iostream>

//Tìm ngày trước đó, sau đó k ngày
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

DIEM ngay_truoc_sau(DIEM d, int k) {
    int so_ngay_trong_thang[] = { 31, 28 + nam_nhuan(d.nam), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    int so_ngay = so_thu_tu_ngay_tu_1_1_1(d) + k;
    int nam = 1;
    while (so_ngay > 365 + nam_nhuan(nam)) {
        so_ngay -= 365 + nam_nhuan(nam);
        nam++;
    }
    int thang = 1;
    while (so_ngay > so_ngay_trong_thang[thang - 1]) {
        so_ngay -= so_ngay_trong_thang[thang - 1];
        thang++;
    }
    int ngay = so_ngay;
    return DIEM{ ngay, thang, nam };
}

int main() {
    DIEM d = { 27, 4, 2023 };
    DIEM d_truoc = ngay_truoc_sau(d, -10);
    DIEM d_sau = ngay_truoc_sau(d, 10);
    cout << "Ngay hien tai: " << d.ngay << "/" << d.thang << "/" << d.nam << endl;
    cout << "Ngay 10 ngay truoc: " << d_truoc.ngay << "/" << d_truoc.thang << "/" << d_truoc.nam << endl;
    cout << "Ngay 10 ngay sau: " << d_sau.ngay << "/" << d_sau.thang << "/" << d_sau.nam << endl;
    return 0;

    //output =>
    //Ngay hien tai : 27 / 4 / 2023
    //Ngay 10 ngay truoc : 16 / 4 / 2023
    //Ngay 10 ngay sau : 6 / 5 / 2023
}

#include <iostream>

//Nhập / Xuất đa thức.

using namespace std;

struct DONTHUC {
    float he_so;
    char bien_so;
    int mu_so;
};

void nhap_don_thuc(DONTHUC& dt) {
    cout << "Nhap he so: ";
    cin >> dt.he_so;
    cout << "Nhap bien so: ";
    cin >> dt.bien_so;
    cout << "Nhap mu so: ";
    cin >> dt.mu_so;
}

void xuat_don_thuc(DONTHUC dt) {
    cout << dt.he_so << dt.bien_so << "^" << dt.mu_so;
}

int main() {
    DONTHUC dt1;
    nhap_don_thuc(dt1);
    xuat_don_thuc(dt1);
    return 0;
}

//output =>
//Nhap he so : 2.5
//Nhap bien so : x
//Nhap mu so : 3
//2.5x ^ 3
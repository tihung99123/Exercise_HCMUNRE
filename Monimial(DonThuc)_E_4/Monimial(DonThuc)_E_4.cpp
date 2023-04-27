#include <iostream>

//Tính tổng, hiệu, tích, thương hai đa thức.
using namespace std;

struct DONTHUC {
    float he_so;
    char bien_so;
    int mu_so;
};

DONTHUC tich_don_thuc(DONTHUC dt1, DONTHUC dt2) {
    DONTHUC dt;
    dt.he_so = dt1.he_so * dt2.he_so;
    dt.bien_so = dt1.bien_so;
    dt.mu_so = dt1.mu_so + dt2.mu_so;
    return dt;
}

DONTHUC thuong_don_thuc(DONTHUC dt1, DONTHUC dt2) {
    DONTHUC dt;
    dt.he_so = dt1.he_so / dt2.he_so;
    dt.bien_so = dt2.bien_so;
    dt.mu_so = dt1.mu_so - dt2.mu_so;
    return dt;
}

void xuat_don_thuc(DONTHUC dt) {
    cout << dt.he_so << dt.bien_so << "^" << dt.mu_so;
}

int main() {
    DONTHUC dt1 = { 6, 'x', 3 };
    DONTHUC dt2 = { 2, 'x', 8 };
    DONTHUC tich = tich_don_thuc(dt1, dt2);
    DONTHUC thuong = thuong_don_thuc(dt1, dt2);
    cout << "Tich hai don thuc: ";
    xuat_don_thuc(tich);
    cout << endl;
    cout << "Thuong hai don thuc: ";
    xuat_don_thuc(thuong);
    return 0;
}

//output =>
//Tich hai don thuc : 12x ^ 11
//Thuong hai don thuc : 3x ^ -5



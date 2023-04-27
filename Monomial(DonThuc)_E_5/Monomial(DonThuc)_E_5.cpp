#include <iostream>

//Tính đạo hàm cấp 1 của đơn thức
using namespace std;

struct DONTHUC {
    float he_so;
    char bien_so;
    int mu_so;
};

DONTHUC dao_ham_cap_1(DONTHUC dt) {
    DONTHUC dh;
    dh.he_so = dt.he_so * dt.mu_so;
    dh.bien_so = dt.bien_so;
    dh.mu_so = dt.mu_so - 1;
    return dh;
}

void xuat_don_thuc(DONTHUC dt) {
    cout << dt.he_so << dt.bien_so << "^" << dt.mu_so;
}

int main() {
    DONTHUC dt = { 6, 'x', 3 };
    DONTHUC dh = dao_ham_cap_1(dt);
    cout << "Dao ham cap 1 cua don thuc: ";
    xuat_don_thuc(dh);
    return 0;
}

//output=>
//Dao ham cap 1 cua don thuc : 18x ^ 2
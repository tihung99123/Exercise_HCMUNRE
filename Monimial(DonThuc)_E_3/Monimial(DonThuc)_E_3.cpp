#include <iostream>
using namespace std;

struct PHAN_SO {
    int tu_so;
    int mau_so;
};

int tim_ucln(int a, int b) {
    if (b == 0) {
        return a;
    }
    return tim_ucln(b, a % b);
}

void rut_gon(PHAN_SO& ps) {
    int ucln = tim_ucln(ps.tu_so, ps.mau_so);
    ps.tu_so /= ucln;
    ps.mau_so /= ucln;
}

void nhap_phan_so(PHAN_SO& ps) {
    cout << "Nhap tu so: ";
    cin >> ps.tu_so;
    cout << "Nhap mau so: ";
    cin >> ps.mau_so;
}

void xuat_phan_so(PHAN_SO ps) {
    cout << ps.tu_so << "/" << ps.mau_so;
}

int main() {
    PHAN_SO ps1;
    nhap_phan_so(ps1);
    rut_gon(ps1);
    xuat_phan_so(ps1);
    return 0;
}

//output =>
//Nhap tu so : 6
//Nhap mau so : 8
//3 / 4

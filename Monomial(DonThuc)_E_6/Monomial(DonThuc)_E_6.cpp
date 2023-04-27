#include <iostream>
#include <cmath>

//Tính giá trị đơn thức tại x = x0
using namespace std;

struct DONTHUC {
    float he_so;
    char bien_so;
    int mu_so;
};

float gia_tri_don_thuc(DONTHUC dt, float x0) {
    return dt.he_so * pow(x0, dt.mu_so);
}

int main() {
    DONTHUC dt = { 6, 'x', 8 };
    float x0 = 2;
    float gia_tri = gia_tri_don_thuc(dt, x0);
    cout << "Gia tri cua don thuc tai x = " << x0 << " la: " << gia_tri;
    return 0;
}

//output=>
//Gia tri cua don thuc tai x = 2 la: 1536
#include <iostream>

//Khai báo kiểu dữ liệu đơn thức(DONTHUC).

using namespace std;

struct DONTHUC {
    float he_so;
    char bien_so;
    int mu_so;
};

int main() {
    DONTHUC dt1 = { 2.5, 'x', 3 };
    cout << "He so: " << dt1.he_so << endl;
    cout << "Bien so: " << dt1.bien_so << endl;
    cout << "Mu so: " << dt1.mu_so << endl;
    return 0;
}

//output =>
//He so : 2.5
//Bien so : x
//Mu so : 3

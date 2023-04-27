#include <iostream>

//So sánh hai ngày.
using namespace std;

struct DIEM {
    int ngay;
    int thang;
    int nam;
};

bool so_sanh_ngay(DIEM d1, DIEM d2) {
    if (d1.nam < d2.nam) {
        return true;
    }
    else if (d1.nam > d2.nam) {
        return false;
    }
    else if (d1.thang < d2.thang) {
        return true;
    }
    else if (d1.thang > d2.thang) {
        return false;
    }
    else if (d1.ngay < d2.ngay) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    DIEM d1 = { 30, 4, 2023 };
    DIEM d2 = { 1, 5, 2023 };
    DIEM d3 = { 15, 4, 2023 };

    cout << "So sanh d1 va d2: " << so_sanh_ngay(d1, d2) << endl;
    cout << "So sanh d1 va d3: " << so_sanh_ngay(d1, d3) << endl;
    cout << "So sanh d2 va d3: " << so_sanh_ngay(d2, d3) << endl;

    return 0;
}

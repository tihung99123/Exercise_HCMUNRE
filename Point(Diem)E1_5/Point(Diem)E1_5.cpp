#include <iostream>

//Kiểm tra điểm thuộc phần tư nào ?
using namespace std;

// kiểm tra điểm A thuộc phần tư nào của hệ trục tọa độ Oxy
void check_quadrant(float x, float y) {
    if (x > 0 && y > 0) {
        cout << "Diem A nam trong phan tu thu I" << endl;
    }
    else if (x < 0 && y > 0) {
        cout << "Diem A nam trong phan tu thu II" << endl;
    }
    else if (x < 0 && y < 0) {
        cout << "Diem A nam trong phan tu thu III" << endl;
    }
    else if (x > 0 && y < 0) {
        cout << "Diem A nam trong phan tu thu IV" << endl;
    }
    else {
        cout << "Diem A nam tai goc toa do" << endl;
    }
}

int main() {
    float x, y;

    // nhập tọa độ của điểm A
    cout << "Nhap toa do diem A: " << endl;
    cout << "x = ";
    cin >> x;
    cout << "y = ";
    cin >> y;

    // kiểm tra và hiển thị phần tư mà điểm A thuộc
    check_quadrant(x, y);

    return 0;
}

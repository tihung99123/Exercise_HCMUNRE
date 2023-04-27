#include <iostream>
#include <cmath>

// khai báo kiểu dữ liệu DIEM
using namespace std;

struct DIEM {
	float x; // hoành độ
	float y; // tung độ
};

int main() {
	// khởi tạo hai biến điểm A và B
	DIEM A, B;

	// nhập thông tin cho điểm A
	cout << "Nhap toa do diem A: " << endl;
	cout << "x = ";
	cin >> A.x;
	cout << "y = ";
	cin >> A.y;

	// nhập thông tin cho điểm B
	cout << "Nhap toa do diem B: " << endl;
	cout << "x = ";
	cin >> B.x;
	cout << "y = ";
	cin >> B.y;

	cout << "A(" << A.x << ", " << A.y << ")" << endl;
	cout << "B(" << B.x << ", " << B.y << ")" << endl;

	return 0;
}

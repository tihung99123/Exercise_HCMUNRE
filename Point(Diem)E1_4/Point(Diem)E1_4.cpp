#include <iostream>

//Tìm điểm đối xứng qua gốc tọa độ / trục Ox / Oy.
using namespace std;

// khai báo kiểu dữ liệu DIEM
struct DIEM {
	float x; // hoành độ
	float y; // tung độ
};

// tìm điểm đối xứng của A qua gốc tọa độ O
DIEM symmetry_origin(DIEM A) {
	DIEM A_;
	A_.x = -A.x;
	A_.y = -A.y;
	return A_;
}

int main() {
	DIEM A, A_;

	// nhập tọa độ của điểm A
	cout << "Nhap toa do diem A: " << endl;
	cout << "x = ";
	cin >> A.x;
	cout << "y = ";
	cin >> A.y;

	// tìm và hiển thị tọa độ của điểm đối xứng A' qua gốc tọa độ O
	A_ = symmetry_origin(A);
	cout << "Toa do cua diem A' qua goc toa do la: ";
	cout << "(" << A_.x << ", " << A_.y << ")" << endl;

	return 0;
}

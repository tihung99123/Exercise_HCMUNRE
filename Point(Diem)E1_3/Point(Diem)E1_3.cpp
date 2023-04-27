#include <iostream>
#include <cmath>

//Tính khoảng cách giữa hai điểm.
using namespace std;

// khai báo kiểu dữ liệu DIEM
struct DIEM {
	float x; // hoành độ
	float y; // tung độ
};

// tính khoảng cách giữa hai điểm A và B
float distance(DIEM A, DIEM B) {
	return sqrt((B.x - A.x) * (B.x - A.x) + (B.y - A.y) * (B.y - A.y));
}

int main() {
	DIEM A, B;

	// nhập tọa độ của hai điểm A và B
	cout << "Nhap toa do diem A: " << endl;
	cout << "x = ";
	cin >> A.x;
	cout << "y = ";
	cin >> A.y;

	cout << "Nhap toa do diem B: " << endl;
	cout << "x = ";
	cin >> B.x;
	cout << "y = ";
	cin >> B.y;

	// tính và hiển thị khoảng cách giữa hai điểm A và B
	float d = distance(A, B);
	cout << "Khoang cach giua diem A va B la: " << d << endl;

	return 0;
}

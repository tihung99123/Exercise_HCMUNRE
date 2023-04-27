#include <iostream>

//Nhập / Xuất tam giác.
using namespace std;

// khai báo kiểu dữ liệu TAMGIAC
struct TAMGIAC {
	float x1, y1; // tọa độ điểm A
	float x2, y2; // tọa độ điểm B
	float x3, y3; // tọa độ điểm C
};

// nhập thông tin của một tam giác
void nhapTamGiac(TAMGIAC& tg) {
	cout << "Nhap toa do diem A: " << endl;
	cout << "x1 = ";
	cin >> tg.x1;
	cout << "y1 = ";
	cin >> tg.y1;

	cout << "Nhap toa do diem B: " << endl;
	cout << "x2 = ";
	cin >> tg.x2;
	cout << "y2 = ";
	cin >> tg.y2;

	cout << "Nhap toa do diem C: " << endl;
	cout << "x3 = ";
	cin >> tg.x3;
	cout << "y3 = ";
	cin >> tg.y3;
}

// xuất thông tin của một tam giác
void xuatTamGiac(TAMGIAC tg) {
	cout << "Thong tin tam giac: " << endl;
	cout << "A(" << tg.x1 << ", " << tg.y1 << ")" << endl;
	cout << "B(" << tg.x2 << ", " << tg.y2 << ")" << endl;
	cout << "C(" << tg.x3 << ", " << tg.y3 << ")" << endl;
}

int main() {
	TAMGIAC tg;

	// nhập thông tin của tam giác
	nhapTamGiac(tg);

	// xuất thông tin của tam giác
	xuatTamGiac(tg);

	return 0;
}

#include <iostream>
#include <cmath> // thư viện chứa hàm sqrt()


//Tính chu vi, diện tích tam giác.
using namespace std;

// khai báo kiểu dữ liệu TAMGIAC
struct TAMGIAC {
	float x1, y1; // tọa độ điểm A
	float x2, y2; // tọa độ điểm B
	float x3, y3; // tọa độ điểm C
};

// tính độ dài cạnh AB
float tinhDoDaiAB(TAMGIAC tg) {
	return sqrt(pow(tg.x2 - tg.x1, 2) + pow(tg.y2 - tg.y1, 2));
}

// tính độ dài cạnh BC
float tinhDoDaiBC(TAMGIAC tg) {
	return sqrt(pow(tg.x3 - tg.x2, 2) + pow(tg.y3 - tg.y2, 2));
}

// tính độ dài cạnh AC
float tinhDoDaiAC(TAMGIAC tg) {
	return sqrt(pow(tg.x3 - tg.x1, 2) + pow(tg.y3 - tg.y1, 2));
}

// tính chu vi tam giác
float tinhChuVi(TAMGIAC tg) {
	float AB = tinhDoDaiAB(tg);
	float BC = tinhDoDaiBC(tg);
	float AC = tinhDoDaiAC(tg);
	return AB + BC + AC;
}

// tính diện tích tam giác
float tinhDienTich(TAMGIAC tg) {
	float AB = tinhDoDaiAB(tg);
	float BC = tinhDoDaiBC(tg);
	float AC = tinhDoDaiAC(tg);
	float p = (AB + BC + AC) / 2; // nửa chu vi tam giác
	return sqrt(p * (p - AB) * (p - BC) * (p - AC));
}


int main() {
	TAMGIAC tg;

	// nhập thông tin của tam giác
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

	// tính chu vi và diện tích của tam giác
	float chuVi = tinhChuVi(tg);

	float dienTich = tinhDienTich(tg);

	cout << "chu vi tam giac: " << chuVi <<endl;

	cout << "dien tich tam giac: " << dienTich << endl;
}
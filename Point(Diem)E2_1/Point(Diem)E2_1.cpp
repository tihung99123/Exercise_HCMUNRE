#include <iostream>
using namespace std;

struct TAMGIAC {
    float x1, y1; // tọa độ điểm A
    float x2, y2; // tọa độ điểm B
    float x3, y3; // tọa độ điểm C
};

int main() {
	// khởi tạo hai biến điểm A và B
	TAMGIAC TG;

	// nhập thông tin cho điểm A
	cout << "Nhap toa do diem A: " << endl;
	cout << "x = ";
	cin >> TG.x1;
	cout << "y = ";
	cin >> TG.y1;

	// nhập thông tin cho điểm B
	cout << "Nhap toa do diem B: " << endl;
	cout << "x = ";
	cin >> TG.x2;
	cout << "y = ";
	cin >> TG.y2;

	// nhập thông tin cho điểm C
	cout << "Nhap toa do diem C: " << endl;
	cout << "x = ";
	cin >> TG.x3;
	cout << "y = ";
	cin >> TG.y3;

	cout << "A(" << TG.x1 << ", " << TG.y1 << ")" << endl;
	cout << "B(" << TG.x2 << ", " << TG.y2 << ")" << endl;
	cout << "C(" << TG.x3 << ", " << TG.y3 << ")" << endl;

	return 0;
}
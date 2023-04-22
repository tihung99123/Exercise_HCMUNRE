#include <iostream>
using namespace std;
//Viết chương trình nhập vào đáy nhỏ, đáy lớn và cạnh hình thang.Sau đó tính  và in ra chu vi, diện tích hình thang đó.
int main()
{
	double base1, base2, height, side;//tạo biến đáy nhỏ, đáy lớn, chiều cao và cạnh hình thang
	cout << "Nhap day nho: ";
	cin >> base1;
	cout << "Nhap day lon: ";
	cin >> base2;
	cout << "Nhap canh chieu cao: ";
	cin >> height;
	cout << "Nhap canh hinh thang: ";
	cin >> side;

	double perimeter = base1 + base2 + 2* side; //công thức: đáy nhỏ + đáy lớn + (2 nhân cạnh)
	double area = (base1 + base2) * height / 2; //công thức: (đáy nhỏ + đáy lớn) nhân 1 phần 2 chiều cao

	cout << "Chu Vi Hinh Thang: " << perimeter << endl;
	cout << "Dien Tich Hinh Thang: " << area << endl;
}

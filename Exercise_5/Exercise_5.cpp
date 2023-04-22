#include <iostream>
#include <ctime> //vì có thời gian nên sẽ thêm thư viện này

using namespace std;
//Viết chương trình nhập vào tên, năm sinh, lương cơ bản, hệ số lương  
//của nhân viên.Sau đó tính tuổi, lương và xuất ra màn hình tên, tuổi, lương của nhân viên đó.
int main()
{
	string name; //tạo biến tên
	int yearOfbirth; //tạo biến năm sinh
	double basicsalary, salaryCoefficient; //tạo biến lương cơ bản và hệ số lương
	cout << "Nhap Ten ";
	cin >> name;
	cout << "Nhap Nam Sinh ";
	cin >> yearOfbirth;
	cout << "Nhap Luong Co Ban ";
	cin >> basicsalary;
	cout << "Nhap He So Luong ";
	cin >> salaryCoefficient;

	int currentYear = time(nullptr) / 31536000 + 1970; // tính thời gian hiện tại: thời gian số giây bây giờ chia (365 ngày đổi ra giây) + (1970 năm lịch sử máy tính ra đời :V)
	int age = currentYear - yearOfbirth; //tính tuổi: lấy thời gian hiện tại trừ năm sinh
	double salary = basicsalary * salaryCoefficient; //tính lương: Lương cơ bản nhân cho hệ số lương

	cout << "Ten: " << name << endl;
	cout << "Tuoi: " << age << endl;
	cout << "Luong: " << salary << endl;

}

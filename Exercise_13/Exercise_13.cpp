#include <iostream>
using namespace std;
//Nhập vào năm, tháng(Kiểm tra năm nhuận).Cho biết số ngày của tháng trong năm .
int main()
{
	int year, month, day;
	cout << "Nhap Nam "; cin >> year;
	cout << "Nhap Thang "; cin >> month;

	switch (month)
	{
	case 1: case 3:case 5:case 7:case 8:case 10:case 12:
		day = 31;
		break;
	case 4:case 6:case 9:case 11:
		day = 30;
		break;
	case 2:
		if (year % 4 == 0) {
			day = 29;
		}
		else {
			day = 28;
		}

	default:
		break;
	}
	cout << "Thang " << month << " Co " << day << " Ngay" << endl;
	string nhuan = (year % 4 == 0) ? "Nhuan" : "Khong Nhuan";
	cout << "Nam " << year << " La Nam " << nhuan << endl;

}
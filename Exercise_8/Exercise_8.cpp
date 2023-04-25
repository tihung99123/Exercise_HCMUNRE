#include <iostream>
#include <string> //vì đề có báo nối chuỗi nên sẽ thêm thư viện này
using namespace std;

//Viết chương trình nhập Họ, tên, lớp, Môn học, điểm giữa kỳ, điểm thi của sinh viên.Tính điểm học phần môn học,
//hiển thị Họ, tên, lớp và kết quả môn học(Chú ý phân biệt môn có thực hành hoặc không :
//Nếu là môn có thực hành thì Điểm học phần = Điểm GK * 0.4 + Điểm thi * 0.6; Còn ngược lại Điểm học phần = Điểm GK * 0.3 + Điểm thi * 0.7;
//Kết quả là Nếu Điểm học phần < 4.0 thì “Học lại”.Còn ngược lại để trống).

int main()
{
	string firstname, lastname, coursename, studentClass;// khai báo biến Họ, tên, lớp, Môn học
	double midTerm, finalExam, finalGrade; // khai báo điểm giữa kỳ, điểm thi, điểm học phần
	cout << "Nhap Ho: ";
	cin >> firstname;
	cout << "Nhap Ten: ";
	cin >> lastname;
	cout << "Nhap Lop: ";
	cin >> studentClass;
	cout << "Nhap Mon Hoc: ";
	cin >> coursename;
	cout << "Nhap Diem Giua Ki: ";
	cin >> midTerm;
	cout << "Nhap Diem Cuoi Ki: ";
	cin >> finalExam;

	if (coursename == "ThucHanh") { //nếu học phần tên là Thuc Hanh
		finalGrade = midTerm * 0.4 + finalExam * 0.6; //cuối học phần = giữa kì nhân 0.4 + cuối kì nhân 0.6
		cout << "Thuc Hanh";
	}
	else { //nếu không phải Thuc Hanh
		finalGrade = midTerm * 0.3 + finalExam * 0.7; //cuối học phần = giữa kì nhân 0.3 + cuối kì nhân 0.7
		cout << "Khong Thuc Hanh";
	}

	if (finalExam < 0.4) // nếu điểm cuối học phần bé hơn 0.4
	{
		cout << "Ten: " << firstname << " " << lastname << endl;
		cout << "Lop: " << studentClass << endl;
		cout << "Ket Qua: " << "Chuc Ban May Man Lan Sau => Hoc Lai: " << finalExam << endl; //==> Rớt
	}
	else { //lớn hơn 0.4 thì
		cout << "Ten: " << firstname << " " << lastname << endl;
		cout << "Lop: " << studentClass << endl;
		cout << "Ket Qua: " << "Dau: "<< finalExam << endl; //==> Đậu
	}
	return 0;
}
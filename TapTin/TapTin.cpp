#include <direct.h> // quên nhiệm vu :v
#include<limits.h> //tìm limit của đường dẫn hiện tại
#include<iostream>
#include <fstream> // file stream thư viện dùng để tương tác với file
#include <string> // quá quen thuộc

using namespace std;

string getCurrentDir() { //hàm này tự tạo nên sẽ không có lời giải thích
	char buff[100];
	_getcwd(buff, 100);
	string current_working_dir(buff);
	return current_working_dir;
	// cơ bản là sẽ lấy đường dẫn tại thư mục đang chạy.
}

int main()
{
	ifstream file(getCurrentDir() + "/input.txt"); // trỏ đến file cần xử lí

	if (!file.is_open()) { //nếu file không có thì sẽ output lỗi
		cerr << "khong mo file duoc (khong co File)" << endl;
		return 1;
	}

	string line; 
	while (getline(file, line)) {
		cout << line << endl;
	}

	file.close();
	return 0;
}
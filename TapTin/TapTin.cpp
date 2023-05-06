#include <direct.h>
#include<limits.h>
#include<iostream>
#include <fstream>
#include <string>

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
	ifstream file(getCurrentDir() + "/input.txt");

	if (!file.is_open()) {
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
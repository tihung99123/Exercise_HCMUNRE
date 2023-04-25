#include <algorithm>
#include <sstream>
#include <iostream>
#include <string>
#include <vector>

//Tìm từ có chiều dài dài nhất và in ra.
using namespace std;

string longest_word(string s) { // cách này có dùng con trỏ 1 chút ít nên tạm thời sẽ giải thích ở giữa (hơi khó)
	istringstream iss(s);
	vector<string> words(istream_iterator<string>{iss},istream_iterator<string>()); // dùng vecto sẽ dò tất cả kích thước của 1 chuỗi 
	auto longest = max_element(words.begin(), words.end(),
		[](const string& a, const string& b) { // khúc này sẽ đẩy giá trị trước và sau vào longest xem cái nào sẽ kích thước lớn hơn
			return a.size() < b.size(); //dệ quy lại max_element và tiếp tục tìm kích thước xâu lớn hơn
		});
	return *longest; // xuất ra cái lớn nhất đã tìm được
}


int main() {
	string str = "Hello World, i'm Tihung99123 From github add to nodejs server";
	string longest = longest_word(str);
	cout << "Tu dai nhat trong chuoi: " << longest << endl; // output =>Tihung99123
	return 0;
}
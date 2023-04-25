#include <iostream>
#include <sstream>
#include <string>
#include <vector>

//Đếm xem có bao nhiêu từ trong s.Xuất các từ trên các dòng liên tiếp.
using namespace std;

int count_words(string s) {
	istringstream iss(s);
	vector<string> words(istream_iterator<string>{iss}, istream_iterator<string>()); // sẽ dùng vecto để dò cả kích thước 1 chuỗi
	for (const auto& word : words) { //dùng vòng lặp ghép từng từ đồng thời sẽ là thêm 1 kích thước vào biến words
		cout << word << '\n';
	}
	return words.size();
}

int main() {
	string str = "Hello world!, my name is tihung99123 from vietnam i'm dev";

	cout << count_words(str) << endl; //output => 10
}
#include <string>
#include <iostream>

//Trích ra n ký tự đầu tiên/cuối cùng/bắt đầu tại vị trí pos.
using namespace std;

string extract_substring(string s, int n, string pos) {
    if (pos == "start") {
        return s.substr(0, n); //sẽ output từ kí từ đầu tiên cho đến vị trí n(cũng tức là n trong mảng string)
    }
    else if (pos == "end") {
        return s.substr(s.size() - n); //sẽ output từ full kích thước kí tự cho đến vị trí n - n (cũng tức là n trong mảng string)
    }
    else {
        return s.substr(n);// không có điều kiện thì sẽ xuất bth đến phần tử n
    }
}

int main() {
    string s = "Hello, World! Iam Tihung99123";
    int n = 5;


    string pos_start = "start";
    string result_start = extract_substring(s, n, pos_start);
    cout << "extract_substring start: " << result_start << endl; // output => Hello

    string pos_end = "end";
    string result_end = extract_substring(s, n, pos_end);
    cout << "extract_substring end: " << result_end << endl; // output => 99123

    return 0;
}
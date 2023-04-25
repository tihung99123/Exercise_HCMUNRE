#include <iostream>
#include <regex> // thêm thư viện này vì sẽ là công cụ mạnh mẽ tìm kiếm cách dấu cách
#include <string>

//Viết hàm standard(char s[]) bỏ toàn bộ khoảng trắng đầu chuỗi, cuối chuỗi và giữa 2 từ trong s chỉ còn 1 khoảng trắng.
using namespace std;

string standard(string s) {
    // xoá đoạn đoạn đầu hoặc đoạn cuối các dấu cách trong chuỗi
    s = regex_replace(s, regex("^\\s+|\\s+$"), ""); //regex là một thư viện tìm kiếm đệ quy của một xâu mạnh nhất.
    //Giải thích về regex_replace:
    //  "^\\s+|\\s+$" : tức là các giá trị của ^\\s+ là tìm được hoặc nhiều dấu cách đầu thì sẽ đổi tất cả về giá trị rỗng
    // | : tức là hoặc
    // \\s+$ là tìm một hoặc nhiều cách dấu cách ở cuối thì sẽ đổi tất cả về giá trị rỗng
    
    // xoá đoạn giữa của các dấu cách trong chuỗi và thay thành 1 dấu cách duy nhất ổn định 1 văn bản
    s = regex_replace(s, regex("\\s+"), " ");


    return s;
}

int main() {
    string str = "    Hello,       World!      , , iam   tihung99123     ";

    cout << standard(str) << endl; //output => Hello, World! , , iam tihung99123
}
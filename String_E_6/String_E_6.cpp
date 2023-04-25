#include <string>
#include <iostream>

//Xóa tất cả các khoảng trắng của s.
using namespace std; 

string remove_spaces(string s) {
    s.erase(remove(s.begin(), s.end(), ' '), s.end()); //syntax này cho thấy nó sẽ xoá tất cả các khoảng trắng tử đầu đến cuối miễn là có dấu ' '
    return s;
}

int main() {
    string str = "          heelo       tihung99123             ";

    cout << remove_spaces(str) << endl; //output => heelotihung99123
}
#include <iostream>
#include <cctype> // sẽ thêm thư viện này vì để viết hoa 

//Viết hàm proper(char s[]) đổi các ký tự đầu tiên của mỗi từ sang ký tự in hoa.
using namespace std;

void proper(char s[]) {
    int i = 0;
    while (s[i] != '\0') {
        if (i == 0 || !isalpha(s[i - 1])) { //nếu ngay vị trí i là 0 hoặc trước nó là kí tự là dấu cách thì sẽ viết hoa
            s[i] = toupper(s[i]);
        }
        else {// không phải thì giữ
            s[i] = tolower(s[i]);
        }
        i++;
    }
}

int main() {
    char str[] = "hello, world! , my name is tihung99123 from vietnam learning university hcm";
    proper(str);
    cout << str << std::endl; // output => Hello, World! , My Name Is Tihung99123 From Vietnam Learning University Hcm
}
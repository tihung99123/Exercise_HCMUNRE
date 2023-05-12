#include <iostream>
#include <cctype>  // vì viết hoa sẽ dùng đến thư viện này để viết thường từng chữ cái

//Viết hàm lower(char s[]) đổi toàn bộ các ký sang ký tự thường(giống như hàm strlwr)
using namespace std;


void lower(char s[]) {
    int i = 0;
    while (s[i] != '\0') {
        s[i] = tolower(s[i]);
        i++;
    }
}

int main() {
    char str[] = "Hello, World! I'm TIHUNG99123 from Dev C#,PYTHON,NODEJS,...";
    lower(str);
    cout << str << endl; // output => hello, world! i'm tihung99123 from dev c#,python,nodejs,...
}
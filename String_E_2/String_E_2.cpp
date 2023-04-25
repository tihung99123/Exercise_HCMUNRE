#include <iostream>
#include <cctype> // vì viết hoa sẽ dùng đến thư viện này để viết hoa từng chữ cái

//Viết hàm upper(char s[]) đổi toàn bộ các ký tự sang ký tự hoa(giống hàm strupr).
using namespace std;

//hàm upper(có thư viện)
void upper(char s[]) {
    int i = 0;
    while (s[i] != '\0') {
        s[i] = toupper(s[i]);
        i++;
    }
}


int main()
{
    char str[] = "Hello, World!,i'am tihung99123 136";
    upper(str);
    std::cout << str << std::endl; //output => HELLO, WORLD!

}

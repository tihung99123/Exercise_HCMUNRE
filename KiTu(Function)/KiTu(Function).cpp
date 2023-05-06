#include <iostream>
#include <cctype> // vì viết hoa sẽ dùng đến thư viện này để viết hoa từng chữ cái
#include <string>
#include <tuple>//khai báo thư viện này ví 1 chuỗi sẽ có nhiều kiểu khác nhau dùng cái này để đếm các từ theo điều kiện
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

void lower(char s[]) {
    int i = 0;
    while (s[i] != '\0') {
        s[i] = tolower(s[i]);
        i++;
    }
}


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


tuple<int, int> count_vowels_and_consonants(string s) {
    const string vowels = "aeiouAEIOU";
    int num_vowels = 0; // khai báo biến đếm từ nguyên bắt đầu từ 0
    int num_consonants = 0; // khai báo biến phụ âm bắt đầu từ 0
    for (const auto& c : s) { // lặp qua từng ký tự trong chuỗi
        if (isalpha(c)) { // kiểm tra xem ký tự có phải là bảng chữ cái không?
            if (vowels.find(c) != string::npos) { // kiểm tra xem ký tự có phải là nguyên âm không?
                num_vowels++; // tăng số nguyên âm
            }
            else {
                num_consonants++; // tăng số lượng phụ âm
            }
        }
    }
    return { num_vowels, num_consonants }; // trả về hàm để xuất số lượng nguyên âm và phụ âm
}


int main()
{
    char str_1[] = "Hello, World!,i'am tihung99123 136";
    upper(str_1);
    cout << str_1 << endl; //output => HELLO, WORLD!

    char str_2[] = "Hello, World! I'm TIHUNG99123 from Dev C#,PYTHON,NODEJS,...";
    lower(str_2);
    cout << str_2 << endl; // output => hello, world! i'm tihung99123 from dev c#,python,nodejs,...

    char str_3[] = "hello, world! , my name is tihung99123 from vietnam learning university hcm";
    proper(str_3);
    cout << str_3 << endl; // output => Hello, World! , My Name Is Tihung99123 From Vietnam Learning University Hcm

    string str_4 = "tihung99123 la mot thang dev rat oke";
    auto result = count_vowels_and_consonants(str_4);
    cout << "so nguyen am trong str: " << get<0>(result) << endl; //get<0> tức là lấy giá trị return trong 1 cái đối tượng trong hàm cụ thể là num_vowels 
    //output => 9
    cout << "so phu am trong str: " << get<1>(result) << endl; // tương tự lấy giá trị trong object cụ thể là num_consonants 
    //output => 16
    return 0;
}

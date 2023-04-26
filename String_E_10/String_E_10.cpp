#include <iostream>
#include <cctype>
#include <string>
#include <tuple>//khai báo thư viện này ví 1 chuỗi sẽ có nhiều kiểu khác nhau dùng cái này để đếm các từ theo điều kiện


//Nhập vào một câu. Sau đó đếm số nguyên và phụ âm trong câu vừa nhập.
using namespace std;

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

int main() {
    string s = "tihung99123 la mot thang dev rat oke";
    auto result = count_vowels_and_consonants(s);
    cout << "so nguyen am trong str: " << get<0>(result) << endl; //get<0> tức là lấy giá trị return trong 1 cái đối tượng trong hàm cụ thể là num_vowels output => 9
    cout << "so phu am trong str: " << get<1>(result) << endl; // tương tự lấy giá trị trong object cụ thể là num_consonants output => 16
    return 0;
}
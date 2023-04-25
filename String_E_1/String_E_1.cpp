#include <iostream>
#include <string>

//atoi, atol, atof: đổi chuỗi thành số.
//Itoa, ltoa, ultoa : đổi số thành chuỗi.
//strtok

using namespace std;

int main()
{
    //atoi, atol, atof
    char str[] = "1266663";
    int num = atoi(str);
    cout << num << std::endl; // output => 1266663

    double d = atof("3.14");
    cout << d << std::endl; // output => 3.14

    long l = atol("123456789");
    cout << l << std::endl; // output => 123456789

    cout << "======================================" << endl;
    //Itoa, ltoa, ultoa

    int num_itoa = 12553;
    char str_itoa[10];
    _itoa_s(num_itoa, str_itoa, 10); // vì lí do phiên bản c++ mới đồng thời chuẩn hoá ISO không hợp lệ nên sẽ thêm hậu _itoa_s thay vì itoa
    cout << str_itoa << std::endl; // output => 12553

    long l_ltoa = 123456789;
    char str_ltoa[20];
    _ltoa_s(l_ltoa, str_ltoa, 20);// vì lí do phiên bản c++ mới đồng thời chuẩn hoá ISO không hợp lệ nên sẽ thêm hậu _ltoa_s thay vì ltoa
    cout << str_ltoa << std::endl; // output => 1ibc1j9

    long ul_ultoa = 4294967295;
    char str_ultoa[20];
    _ultoa_s(ul_ultoa, str_ultoa, 20);// vì lí do phiên bản c++ mới đồng thời chuẩn hoá ISO không hợp lệ nên sẽ thêm hậu _ultoa_s thay vì ultoa
    cout << str_ultoa << std::endl; // output => 3723ai4f

}
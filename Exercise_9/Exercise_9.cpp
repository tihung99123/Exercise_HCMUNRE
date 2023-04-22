#include <iostream>
using namespace std;
//Viết chương trình tìm max của 2 số a, b. (Viết chương trình đơn và viết có sử dụng hàm).

int func_Max(int a, int b) { //khởi tạo (hàm) max tìm số lớn nhất
    int max; //khai báo biến thứ 3 tên là max
    if (a > b) { //nếu a lớn hơn b thì a sẽ là số lớn nhất
        max = a;
    }
    else { //nếu không phải thì b sẽ là số lớn nhất
        max = b;
    }
    return max; //trả kết quả vào hàm
}

int main()
{
    int a, b; //khai báo 2 biến a, b để so sánh

    int max; //khai báo biến max để chạy chương trình đơn
    int func_max; //khai báo biến max để chạy chương trình sử dụng hàm

    cout << "Nhap a "; cin >> a;
    cout << "Nhap b "; cin >> b;


    cout << "Chuong Trinh Don\n";
    if (a > b) { //nếu a lớn hơn b thì a sẽ là số lớn nhất
        max = a;
    }
    else { //nếu không phải thì b sẽ là số lớn nhất
        max = b;
    }
    cout << "So Lon Nhat: " << max << endl;

    //========================================================
    cout << "Chuong Trinh Su Dung Ham\n";
    func_max = func_Max(a, b);
    cout << "So Lon Nhat: " << func_max << endl;
}
#include <iostream>
using namespace std;

//Tạo máy tính tay.

int main()
{
    double num1, num2; //khai báo biến sô1, sô2
    char op;
    cout << "Nhap 2 so vao phep tinh "; cin >> num1 >> num2;
    cout << "Nhap phep tinh (+,-,*,/): "; cin >> op;

    double result;
    switch (op) //dùng cấu trúc switch
    {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
            break;

        default:
            break;
    }
    cout << "Ket Qua: " << result << endl;
}

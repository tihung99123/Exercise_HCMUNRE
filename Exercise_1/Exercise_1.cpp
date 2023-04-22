#include <iostream>
using namespace std;
//Viết chương trình nhập vào cạnh hình vuông.Sau đó tính và in ra chu vi, diện tích hình vuông đó.    "init _Main()"
int main()
{
    //tạo biến
    double side_length; //cạnh
    cout << "Nhap chieu dai cua 1 canh trong hinh vuong: ";
    cin >> side_length;
    double perimeter = 4 * side_length; // công thức tính hình vuông: cạnh nhân 4
    double area = side_length * side_length; // công thức tinh diện tích: cạnh nhân cạnh
    cout << "Chu Vi Hinh Vuong: " << perimeter << endl;
    cout << "Dien Tich Hinh Vuong: " << area << endl;
}
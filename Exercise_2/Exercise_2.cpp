#include <iostream>
using namespace std;
//Viết chương trình nhập vào chiều rộng và chiều dài hình chữ nhật.Sau đó tính và in ra chu vi, diện tích hình chữ nhật đó.
int main()
{
    //tạo biến
    double length,width; //cạnh dài, rộng
    cout << "Nhap chieu dai : ";
    cin >> length;
    cout << "Nhap chieu rong: ";
    cin >> width;
    double perimeter = 2 * (length + width); // công thức tính hình vuông: dài cộng rộng nhân 2
    double area = length * width; // công thức tinh diện tích: dài nhân rộng
    cout << "Chu Vi Chu Nhat: " << perimeter << endl;
    cout << "Dien Tich Chu Nhat: " << area << endl;

}

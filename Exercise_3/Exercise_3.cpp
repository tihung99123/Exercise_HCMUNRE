#include <iostream>
#include <math.h>
using namespace std;
//Viết chương trình nhập vào bán kính hình tròn.Sau đó tính và in ra chu vi, diện tích của hình tròn đó.
//Tạo biến cố định
#define M_PI 3.14159265358979323846
int main()
{
    double radius; //tạo biến bán kính
    cout << "Nhap Ban Kinh Duong Tron: ";
    cin >> radius;

    double perimeter = 2 * M_PI * radius; //công thức: 2 nhân pi nhân cho bán kính
    double area = M_PI * pow(radius,2); //công thức: pi nhân cho bán kính bình phương

    cout << "Chu Vi Hinh Tron: " << perimeter << endl;
    cout << "Dien Tich Hinh Tron: " << area << endl;
}

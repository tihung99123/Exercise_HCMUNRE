#include <iostream>
#include <math.h> // vì có tính căn bậc 2 nên dùng thư viện này
using namespace std;

//Viết chương trình giải phương trình bậc hai ax2 + bx + c = 0.

int main()
{
    double a, b, c;//tạo biến a, b và c
	cout << "Nhap a, b, c: ";
	cin >> a>>b>>c; //kiểu mới nhưng sài cái nào cũng đc miễn chạy oke!

	double discriminant = pow(b, 2) - 4 * a * c; //discriminant = delta = b bình trừ 4 a c
	if (discriminant > 0) { //nếu delta lớn hơn 0
		double x1 = (-b - sqrt(discriminant)) / (2 * a); //x1 = trừ b trừ căn 2 delta chia cho 2a
		double x2 = (-b + sqrt(discriminant)) / (2 * a); //x2 = trừ b cộng căn 2 delta chia cho 2a
		cout << "X1= " << x1 << endl;
		cout << "X2= " << x2 << endl;
	}
	else if (discriminant == 0) { // nếu delta bằng 0
		double x = -b / 2 * a; // x = -b/2a
		cout << "X= " << x << endl;
	}
	else if (discriminant < 0) { //nếu delta bé hơn 0
		cout << "Phuong Trinh Vo Nghiem" << endl;
	}
}
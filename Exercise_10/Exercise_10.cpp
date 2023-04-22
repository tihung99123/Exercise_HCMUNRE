#include <iostream>
using namespace std;
//Viết chương trình tìm USCLN và BSCNN. (Viết chương trình có sử dụng hàm).
int USCLN(int a, int b) { //khai báo hàm tìm ước số chung lơn nhất
	if (b == 0) { //nếu b bằng 0 thì
		return a; //xuất a ra
	}
	else { //không phải thì
		return USCLN(b, a % b); //xuất ước số chung theo công thức: a chia b dư số lẻ hoặc chẵn
	}
}

int BSCNN(int a, int b) { // khai boá hàm tìm bội số chung nhỏ nhất
	return (a * b) / USCLN(a, b); //xuất bội số chung nhỏ nhất theo công thức: (a * b) / ước số chung của a và b
}

int main()
{
	int num1, num2; //khai báo biến số1, số2
	cout << "Nhap 2 so Bat Ki: ";
	cin >> num1 >> num2;
	
	int USCLN_result = USCLN(num1, num2);
	int BSCNN_result = BSCNN(num1, num2);

	cout << "USCLN: " << USCLN_result << endl;
	cout << "BSCNN: " << BSCNN_result << endl;
}
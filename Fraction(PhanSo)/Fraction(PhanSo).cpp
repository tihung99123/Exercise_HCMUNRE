#include<iostream>
using namespace std;

// Khai báo kiểu dữ liệu phân số
struct Fraction {
    int numerator, denominator;
};

// Hàm nhập phân số
void inputFraction(Fraction& f) {
    cout << "Nhap tu so: ";
    cin >> f.numerator;
    cout << "Nhap mau so: ";
    cin >> f.denominator;
}

// Hàm xuất phân số
void outputFraction(Fraction f) {
    cout << f.numerator << "/" << f.denominator << endl;
}

// Hàm tìm ước chung lớn nhất vì sẽ tìm cái tử mẫu mẫu để có thể rút gọn
int USCLN(int a, int b) {
    if (b == 0) return a;
    return USCLN(b, a % b);
}

// Hàm tìm bội chung nhỏ nhất
int BSCNN(int a, int b) {
    return (a * b) / USCLN(a, b);
}

// Hàm rút gọn phân số
Fraction reduce(Fraction f) {
    int ucln = USCLN(f.numerator, f.denominator);
    f.numerator /= ucln;
    f.denominator /= ucln;
    return f;
}


// Hàm tính tổng hai phân số
Fraction sum(Fraction f1, Fraction f2) {
    Fraction f;
    f.numerator = f1.numerator * f2.denominator + f2.numerator * f1.denominator;
    f.denominator = f1.denominator * f2.denominator;
    f = reduce(f);
    return f;
}

// Hàm tính hiệu hai phân số
Fraction diff(Fraction f1, Fraction f2) {
    Fraction f;
    f.numerator = f1.numerator * f2.denominator - f2.numerator * f1.denominator;
    f.denominator = f1.denominator * f2.denominator;
    f = reduce(f);
    return f;
}

// Hàm tính tích hai phân số
Fraction product(Fraction f1, Fraction f2) {
    Fraction f;
    f.numerator = f1.numerator * f2.numerator;
    f.denominator = f1.denominator * f2.denominator;
    f = reduce(f);
    return f;
}


// Hàm kiểm tra phân số tối giản
bool laToiGian(Fraction f) {
    int ucln = USCLN(f.numerator, f.denominator);
    if (ucln == 1) return true;
    return false;
}


// Hàm tính thương hai phân số
Fraction thuong(Fraction f1, Fraction f2) {
    Fraction f;
    f.numerator = f1.numerator * f2.denominator;
    f.denominator = f1.denominator * f2.numerator;
    f = reduce(f);
    return f;
}


// Hàm quy đồng hai phân số
void quyDong(Fraction& f1, Fraction& f2) {
    int bc = BSCNN(f1.numerator, f2.denominator);
    f1.numerator *= bc / f1.numerator;
    f1.numerator = bc;
    f1.numerator *= bc / f2.denominator;
    f2.denominator = bc;
}

// Hàm kiểm tra phân số âm hay dương
bool isSign(Fraction f) {
    if ((f.numerator > 0 && f.denominator > 0) || (f.numerator < 0 && f.denominator < 0))
        return true;
    else
        return false;
}

// Hàm tìm ước chung lớn nhất của hai số nguyên
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

// Hàm so sánh hai phân số
int compare(Fraction a, Fraction b) {
    quyDong(a, b);
    if (a.numerator > b.numerator)
        return 1;
    else if (a.numerator < b.numerator)
        return -1;
    else {
        if (a.denominator > b.denominator)
            return 1;
        else if (a.denominator < b.denominator)
            return -1;
        else
            return 0;
    }
}



int main() {
    Fraction f;
    //nhập xuất phân số
    inputFraction(f); // nhập tử
    outputFraction(f); // nhập mẫu

    // Rút gọn phân số

    f = reduce(f);
    cout << "rut gon: " << f.numerator << "/" << f.denominator << endl;

    cout << "=========================================================" << endl;

    Fraction f1, f2;
    cout << "Nhap phan so 1: " << endl;
    cout << "Tu so: ";
    cin >> f1.numerator;
    cout << "Mau so: ";
    cin >> f1.denominator;
    cout << "Nhap phan so 2: " << endl;
    cout << "Tu so: ";
    cin >> f2.numerator;
    cout << "Mau so: ";
    cin >> f2.denominator;

    // Tính tổng, hiệu, tích, thương
    Fraction tong = sum(f1, f2);
    Fraction hieu = diff(f1, f2);
    Fraction tich = product(f1, f2);

    Fraction thuongPS = thuong(f1, f2);

    // Xuất kết quả
    cout << "Tong hai phan so la: " << tong.numerator << "/" << tong.denominator << endl;
    cout << "Hieu hai phan so la: " << hieu.numerator << "/" << hieu.denominator << endl;
    cout << "Tich hai phan so la: " << tich.numerator << "/" << tich.denominator << endl;
    cout << "Thuong hai phan so la: " << thuongPS.numerator << "/" << thuongPS.denominator << endl;

    cout << "============phan so toi gian (f)==========================" << endl;


    // Kiểm tra phân số tối giản
    if (laToiGian(f)) {
        cout << "Phan so da toi gian." << endl;
    }
    else {
        cout << "Phan so chua toi gian." << endl;
    }


    cout << "============quy dong (f1,f2)==========================" << endl;

    // Quy đồng hai phân số
    quyDong(f1, f2);

    // Xuất phân số đã quy đồng
    cout << "Phan so 1 sau khi quy dong: " << f1.numerator << "/" << f1.denominator << endl;
    cout << "Phan so 2 sau khi quy dong: " << f2.numerator << "/" << f2.denominator << endl;


    cout << "============kiem tra am duong (f)==========================" << endl;

    // Kiểm tra phân số âm hay dương
    if (isSign(f)) {
        cout << "Phan so la duong." << endl;
    }
    else {
        cout << "Phan so la am." << endl;
    }

    cout << "============so sanh (f1,f2)==========================" << endl;


    // So sánh hai phân số
    int result = compare(f1, f2);
    if (result == 1)
        cout << "Phan so thu nhat lon hon phan so thu hai." << endl;
    else if (result == -1)
        cout << "Phan so thu nhat nho hon phan so thu hai." << endl;
    else
        cout << "Hai phan so bang nhau." << endl;

    return 0;
}

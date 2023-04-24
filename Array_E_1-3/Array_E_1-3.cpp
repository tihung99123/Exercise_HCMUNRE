#include <iostream>
using namespace std;
//Đếm số nguyên tố và không nguyên tố; Số chẵn và số lẻ; Số âm và số dương(Kiểm tra và đếm)

// Hàm sử dụng check số nguyên tố
bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

// Hàm sử dụng đếm số nguyên tố
void countPrimes(int arr[], int n, int& numPrimes, int& numNonPrimes) {
    numPrimes = 0;
    numNonPrimes = 0;
    for (int i = 0; i < n; i++) {
        if (isPrime(arr[i])) {
            numPrimes++;
        }
        else {
            numNonPrimes++;
        }
    }
}

// Hàm sử dụng check số chẵn/lẽ
void countEvenOdd(int arr[], int n, int& numEven, int& numOdd) {
    numEven = 0;
    numOdd = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            numEven++;
        }
        else {
            numOdd++;
        }
    }
}

// Hàm sử dụng đếm số âm/dương
void countPosNeg(int arr[], int n, int& numPos, int& numNeg) {
    numPos = 0;
    numNeg = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            numPos++;
        }
        else if (arr[i] < 0) {
            numNeg++;
        }
    }
}

int main() {
    int n;
    cout << "Nhap so phan tu: ";
    cin >> n;
    int arr[1000];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int numPrimes, numNonPrimes, numEven, numOdd, numPos, numNeg;
    countPrimes(arr, n, numPrimes, numNonPrimes);
    countEvenOdd(arr, n, numEven, numOdd);
    countPosNeg(arr, n, numPos, numNeg);
    cout << "Cac So Nguyen To: " << numPrimes << endl;
    cout << "Cac So Khong Nguyen To: " << numNonPrimes << endl;
    cout << "Cac So Chan: " << numEven << endl;
    cout << "Cac So Le: " << numOdd << endl;
    cout << "Cac So Duong: " << numPos << endl;
    cout << "Cac So Am: " << numNeg << endl;
    return 0;
}

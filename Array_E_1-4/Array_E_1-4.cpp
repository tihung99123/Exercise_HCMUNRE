#include <iostream>
using namespace std;
// Hàm tách số nguyên tố và không nguyên tố trong mảng
void separatePrimes(int arr[], int n, int primes[], int& numPrimes, int nonPrimes[], int& numNonPrimes) {
    numPrimes = 0;
    numNonPrimes = 0;
    for (int i = 0; i < n; i++) {
        if (isPrime(arr[i])) {
            primes[numPrimes] = arr[i];
            numPrimes++;
        }
        else {
            nonPrimes[numNonPrimes] = arr[i];
            numNonPrimes++;
        }
    }
}

// Hàm tách số chẵn/ lẻ trong mảng
void separateEvenOdd(int arr[], int n, int even[], int& numEven, int odd[], int& numOdd) {
    numEven = 0;
    numOdd = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            even[numEven] = arr[i];
            numEven++;
        }
        else {
            odd[numOdd] = arr[i];
            numOdd++;
        }
    }
}

// Hàm tách số dương/ số âm trong mảng
void separatePosNeg(int arr[], int n, int pos[], int& numPos, int neg[], int& numNeg) {
    numPos = 0;
    numNeg = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            pos[numPos] = arr[i];
            numPos++;
        }
        else if (arr[i] < 0) {
            neg[numNeg] = arr[i];
            numNeg++;
        }
    }
}
int main()
{
    int n;
    cout << "Nhap so phan tu: ";
    cin >> n;
    int arr[1000];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int primes[n], numPrimes, nonPrimes[n], numNonPrimes, even[n], numEven, odd[n], numOdd, pos[n], numPos, neg[n], numNeg;
    separatePrimes(arr, n, primes, numPrimes, nonPrimes, numNonPrimes);
    separateEvenOdd(arr, n, even, numEven, odd, numOdd);
    separatePosNeg(arr, n, pos, numPos, neg, numNeg);
    cout << "So nguyen to: ";
    for (int i = 0; i < numPrimes; i++) {
        cout << primes[i] << " ";
    }
    cout << endl;
    cout << "So khong nguyen to: ";
    for (int i = 0; i < numNonPrimes; i++) {
        cout << nonPrimes[i] << " ";
    }
    cout << endl;
    cout << "So chan: ";
    for (int i = 0; i < numEven; i++) {
        cout << even[i] << " ";
    }
    cout << endl;
    cout << "So Le: ";
    for (int i = 0; i < numOdd; i++) {
        cout << odd[i] << " ";
    }
    cout << endl;
    cout << "So Duong: ";
    for (int i = 0; i < numPos; i++) {
        cout << pos[i] << " ";
    }
    cout << endl;
    cout << "So Am: ";
    for (int i = 0; i < numNeg; i++) {
        cout << neg[i] << " ";
    }
    cout << endl;
    return 0;
}

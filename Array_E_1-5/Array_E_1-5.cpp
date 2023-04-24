#include <iostream>
using namespace std;

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


// Hàm gộp hai mảng
void mergeArrays(int arr1[], int n1, int arr2[], int n2, int mergedArr[], int& numMerged) {
    numMerged = 0;
    for (int i = 0; i < n1; i++) {
        mergedArr[numMerged] = arr1[i];
        numMerged++;
    }
    for (int i = 0; i < n2; i++) {
        mergedArr[numMerged] = arr2[i];
        numMerged++;
    }
}

// Hàm hợp nhất các số nguyên tố và không nguyên tố trong hai mảng
void mergePrimes(int primes[], int numPrimes, int nonPrimes[], int numNonPrimes, int mergedPrimes[], int& numMergedPrimes) {
    mergeArrays(primes, numPrimes, nonPrimes, numNonPrimes, mergedPrimes, numMergedPrimes);
}

// Hàm gộp số chẵn và lẻ trong 2 mảng
void mergeEvenOdd(int even[], int numEven, int odd[], int numOdd, int mergedEven[], int& numMergedEven) {
    mergeArrays(even, numEven, odd, numOdd, mergedEven, numMergedEven);
}

// Hàm hợp nhất số dương và số âm trong hai mảng
void mergePosNeg(int pos[], int numPos, int neg[], int numNeg, int mergedPos[], int& numMergedPos) {
    mergeArrays(pos, numPos, neg, numNeg, mergedPos, numMergedPos);
}


int main() {
    int n;
    cout << "Nhap so phan tu: ";
    cin >> n;
    int arr[1000];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int primes[1000], numPrimes, nonPrimes[1000], numNonPrimes, even[1000], numEven, odd[1000], numOdd, pos[1000], numPos, neg[1000], numNeg;
    separatePrimes(arr, n, primes, numPrimes, nonPrimes, numNonPrimes);
    separateEvenOdd(arr, n, even, numEven, odd, numOdd);
    separatePosNeg(arr, n, pos, numPos, neg, numNeg);
    int mergedPrimes[1000], numMergedPrimes, mergedEven[1000], numMergedEven, mergedPos[1000], numMergedPos;
    mergePrimes(primes, numPrimes, nonPrimes, numNonPrimes, mergedPrimes, numMergedPrimes);
    mergeEvenOdd(even, numEven, odd, numOdd, mergedEven, numMergedEven);
    mergePosNeg(pos, numPos, neg, numNeg, mergedPos, numMergedPos);
    cout << "Gop cac so nguyen to va khong nguyen to: ";
    for (int i = 0; i < numMergedPrimes; i++) {
        cout << mergedPrimes[i] << " ";
    }
    cout << endl;
    cout << "Gop cac so chan va le: ";
    for (int i = 0; i < numMergedEven; i++) {
        cout << mergedEven[i] << " ";
    }
    cout << endl;
    cout << "Gop cac so duong va am: ";
    for (int i = 0; i < numMergedPos; i++) {
        cout << mergedPos[i] << " ";
    }
    cout << endl;
    return 0;
}

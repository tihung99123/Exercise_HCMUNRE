#include <iostream>
using namespace std;

//Tìm phần tử nhỏ nhất và lớn nhất trong mảng(Số nguyên tố và không nguyên tố; Số chẵn và số lẻ; Số âm và số dương)


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
void separatePrimes(int arr[], int n, int primes[], int& numPrimes, int nonPrimes[], int& numNonPrimes, int& minPrime, int& maxPrime, int& minNonPrime, int& maxNonPrime) {
    numPrimes = 0;
    numNonPrimes = 0;
    minPrime = INT_MAX;
    maxPrime = INT_MIN;
    minNonPrime = INT_MAX;
    maxNonPrime = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (isPrime(arr[i])) {
            primes[numPrimes] = arr[i];
            numPrimes++;
            if (arr[i] < minPrime) {
                minPrime = arr[i];
            }
            if (arr[i] > maxPrime) {
                maxPrime = arr[i];
            }
        }
        else {
            nonPrimes[numNonPrimes] = arr[i];
            numNonPrimes++;
            if (arr[i] < minNonPrime) {
                minNonPrime = arr[i];
            }
            if (arr[i] > maxNonPrime) {
                maxNonPrime = arr[i];
            }
        }
    }
}

// Hàm tách số chẵn lẻ trong mảng
void separateEvenOdd(int arr[], int n, int even[], int& numEven, int odd[], int& numOdd, int& minEven, int& maxEven, int& minOdd, int& maxOdd) {
    numEven = 0;
    numOdd = 0;
    minEven = INT_MAX;
    maxEven = INT_MIN;
    minOdd = INT_MAX;
    maxOdd = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            even[numEven] = arr[i];
            numEven++;
            if (arr[i] < minEven) {
                minEven = arr[i];
            }
            if (arr[i] > maxEven) {
                maxEven = arr[i];
            }
        }
        else {
            odd[numOdd] = arr[i];
            numOdd++;
            if (arr[i] < minOdd) {
                minOdd = arr[i];
            }
            if (arr[i] > maxOdd) {
                maxOdd = arr[i];
            }
        }
    }
}

// Hàm tách số dương và số âm trong mảng
void separatePosNeg(int arr[], int n, int pos[], int& numPos, int neg[], int& numNeg, int& minPos, int& maxPos, int& minNeg, int& maxNeg) {
    numPos = 0;
    numNeg = 0;
    minPos = INT_MAX;
    maxPos = INT_MIN;
    minNeg = INT_MAX;
    maxNeg = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (arr[i] >= 0) {
            pos[numPos] = arr[i];
            numPos++;
            if (arr[i] < minPos) {
                minPos = arr[i];
            }
            if (arr[i] > maxPos) {
                maxPos = arr[i];
            }
        }
        else {
            neg[numNeg] = arr[i];
            numNeg++;
            if (arr[i] < minNeg) {
                minNeg = arr[i];
            }
            if (arr[i] > maxNeg) {
                maxNeg = arr[i];
            }
        }
    }
}

void maxPrimes(int primes[], int numPrimes, int nonPrimes[], int numNonPrimes, int mergedPrimes[], int& numMergedPrimes) {
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

int main()
{


}

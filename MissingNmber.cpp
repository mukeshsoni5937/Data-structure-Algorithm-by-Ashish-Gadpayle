#include <iostream>

using namespace std;

int findMissingElement(int A[], int N) {
    int totalSum = N * (N + 1) / 2;  
    int arraySum = 0;
    for (int i = 0; i < N - 1; ++i) {
        arraySum += A[i];
    }

    return totalSum - arraySum;
}

int main() {
    int N1 = 5;
    int A1[] = {1, 2, 3, 5};
    cout << findMissingElement(A1, N1) << endl;

    int N2 = 10;
    int A2[] = {6, 1, 2, 8, 3, 4, 7, 10, 5};
    cout<< findMissingElement(A2, N2) << endl;

    return 0;
}

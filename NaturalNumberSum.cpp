#include <iostream>
using namespace std;
int NumberSum(int n) {
    return n * (n + 1) / 2;
}

int main() {
    int n;
    cout << "Enter a Number= ";
    cin >> n;cout << "Sum of first " << n << " natural numbers= " << NumberSum(n);
    return 0;
}

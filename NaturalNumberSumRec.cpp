#include <iostream>
using namespace std;
int sumRecursion(int n) {
    if (n == 0) {
        return 0;
    } else {
        return n + sumRecursion(n - 1);
    }
}
int main() {
    int n;
    cout << "Enter a Number= ";
    cin >> n;
    cout << "Sum of first " << n << " natural numbers==: " << sumRecursion(n);
    return 0;
}

#include <iostream>
using namespace std;
void twosTable(int n, int multiple) {
    if (n == 1) {
        cout << multiple <<endl;
        return;
    }

    twosTable(n - 1, multiple);
    cout << multiple * n <<endl;
}

int main() {
    int n;

    cout << "Enter the number of multiples= ";
    cin >> n;

    cout << "Multiples of 2 up to " << n << " are=" <<endl;
    twosTable(n, 2);
    
    return 0;
}

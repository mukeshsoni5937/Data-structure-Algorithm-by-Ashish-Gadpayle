#include <iostream>
using namespace std;
int multiply(int a, int b) {
    if (a == 0 || b == 0) 
    {
        return 0;
    }
    else if (b == 1) 
    {
        return a;
    }
    else {
        return a + multiply(a, b - 1);
    }
}

int main() {
    int a, b;
    cout << "Enter two positive numbers to multiply= ";
    cin >> a >> b;

    if (a <= 0 || b <= 0) {
        cout << "Please enter positive numbers." <<endl;
    } else {
        cout << "The result of " << a << " * " << b << " is= " << multiply(a, b) <<endl;
    }

    return 0;
}

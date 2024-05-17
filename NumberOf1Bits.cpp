#include <iostream>
#include <string>
using namespace std;
int hammingWeight(string n) {
    if (n.length() != 32) {
        cout << "Error: Input string must be of length 32." <<endl;
        return -1;
    }

    int count = 0;
    for (int i = 0; i < 32; ++i) {
        if (n[i] == '1') {
            count++;
        }
    }
    return count;
}

int main() {
    string n1 = "10100110101110011010101001110010";
    string n2 = "11010001001101100001010111111101";
    string n3 = "01101001110100100111101101001001";

    cout << "Example 1: " << hammingWeight(n1) << endl;
    cout << "Example 2: " << hammingWeight(n2) << endl;
    cout << "Example 3: " << hammingWeight(n3) << endl;

    return 0;
}

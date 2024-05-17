// Given two strings s and t. Return the minimum number of operations required to convert s to t.
// Example 1:
// Input:
// s = "ycce", t = "ycsce"
// Output: 1
// Explanation: One operation is required
// inserting 's' between two 'e's of s.
// Example 2:
// Input :
//  s="h4c", t= "h4c"
// Output: 0
//  Explanation: Both strings are same.
#include <iostream>
#include <string>
using namespace std;

void check(string s,string t) {
    int output = 0;
    if (s.size() < t.size()) {
        output = t.size() - s.size();
    }
    else if (s.size() > t.size()) {
        output = s.size() - t.size();
    }
    else {
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != t[i]) {
                output++;
            }
        }
    }
    cout << output;
}

int main() {
    check("ycce", "ycsce");
    return 0;
}
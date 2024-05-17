// Given an array of distinct integers candidates and a target integer target, return a list of all unique        combinations of candidates where the chosen numbers sum to target. You may return the combination in any order.
// The same number may be chosen from candidates are unique if the frequency of at least one of the chosen numbers is different.

// The test cases are generated such that the number of unique combinations that sum up to target is less than 150 combinations for the given input.
// Example 1:

// Input: candidates = [2,3,6,7], target = 7

// Output: [[2,2], [7]]

// Explanation:

// 2 and 3 are candidates, and 2 + 2 + 3 = 7. Note that 2 can be used multiple times.

// 7 is a candidate, and 7 = 7.

// These are the only two combinations.

// Example 2:

// Input: candidates = [2,3,5], target = 8

// Output: [[22,2,2], [2,3,3], [3,5]]
#include <iostream>
#include <algorithm>
using namespace std;
const int MAX_SIZE = 100;

void backtrack(int candidates[], int candidatesSize, int target, int start, int combination[], int combinationSize) {
    if (target == 0) {
        cout << "[";
        for (int i = 0; i < combinationSize; ++i) {
            cout << combination[i];
            if (i < combinationSize - 1) {
                cout << ", ";
            }
        }
        cout << "]" << endl;
        return;
    }

    for (int i = start; i < candidatesSize && candidates[i] <= target; ++i) {
        combination[combinationSize] = candidates[i];
        backtrack(candidates, candidatesSize, target - candidates[i], i, combination, combinationSize + 1);
    }
}

int main() {
    int candidates1[] = {2, 3, 6, 7};
    int target1 = 7;
    int combination1[MAX_SIZE] = {0};
    cout << "Example 1:" << endl;
    backtrack(candidates1, sizeof(candidates1) / sizeof(candidates1[0]), target1, 0, combination1, 0);

    int candidates2[] = {2, 3, 5};
    int target2 = 8;
    int combination2[MAX_SIZE] = {0};
    cout << "Example 2:" << endl;
    backtrack(candidates2, sizeof(candidates2) / sizeof(candidates2[0]), target2, 0, combination2, 0);

    return 0;
}

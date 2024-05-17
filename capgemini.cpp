#include <iostream>
#include <algorithm> 
using namespace std;

int main() {
    int n;
    cout << "Enter the number of semesters: ";
    cin >> n;


    int sem[n];

    for (int i = 0; i < n; i++) {
        cout << "\nEnter number of subjects in semester " << i + 1 << " = ";
        cin >> sem[i];
    }

    for (int i = 0; i < n; i++) {
        cout << "\nMarks obtained in semester " << i + 1 << " = ";

        int marks[10];
        for (int j = 0; j < sem[i]; j++) {
            cin >> marks[j];
        }

        int maxi = *max_element(marks, marks + sem[i]);
        cout << "\nMaximum mark in semester " << i + 1 << " : " << maxi;
    }

    r:
    return 0;
}

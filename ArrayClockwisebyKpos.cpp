#include <iostream>
using namespace std;

void rotate(int arr[], int n, int k) {
    k = k % n; 
    
    for (int i = 0; i < k; i++) {
        int last = arr[n - 1];
        for (int j = n - 1; j > 0; j--) {
            arr[j] = arr[j - 1];
        }
        arr[0] = last;
    }
}

int main() {
    int n, k;
    cout << "Enter the size of the array: ";
    cin >> n;
    
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the value of K: ";
    cin >> k;

    cout << "Given array is: \n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << ' ';

    rotate(arr, n, k);

    cout << "\nRotated array is: \n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << ' ';

    return 0;
}

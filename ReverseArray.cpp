#include <iostream>
using namespace std;
int main() {
    int size;
    cout<<"Enter the size of the Array==";
    cin>>size;
    int arr[size];
    cout<<"Enter Array Elements==";
    for (int i = 0; i <= size-1; i++)
    {
        cin>>arr[i];
    }
    
    cout << "Original array: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    for (int start = 0, end = size - 1; start < end; ++start, --end) {
        
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
    }
    
    cout << "\nReversed array: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    
    return 0;
}

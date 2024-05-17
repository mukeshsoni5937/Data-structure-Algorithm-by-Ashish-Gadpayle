#include <iostream>
using namespace std;
void LeaderinArray(int arr[], int n){
    for(int i = 0; i < n; i++){ 
        int j;
        for(j = i + 1; j < n; j++){
            if(arr[j] >= arr[i])  
                break;      
        }
        if(j == n)
            cout << arr[i] << " ";  
    }
}

int main(){
    int n;
    cout << "Enter the size of the array= ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array= ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    LeaderinArray(arr, n);
    // int arr[] = {16, 17, 4, 3, 5, 2};
    // int arr2[] = {1, 2, 3, 4, 0};
    // int n = sizeof(arr) / sizeof(arr[0]);
    // int n2 = sizeof(arr2) / sizeof(arr2[0]);
    // LeaderinArray(arr, n);
    // cout << endl;
    // LeaderinArray(arr2, n2);
    return 0;
}

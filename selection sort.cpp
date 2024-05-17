// cpp program to selection sort
#include <iostream>
using namespace std;
int main()
{

    int arr[] = {5, 17, 3, 9, 15, 1};

    int min = 0, temp, loc = 0;

    for (int i = 0; i <= sizeof(arr) / sizeof(arr[0]) - 1; ++i)
    {
        loc = i;
        min = arr[i];
        for (int j = i + 1; j <= sizeof(arr) / sizeof(arr[0]) - 1; ++j){
            if (min > arr[j])
            {
                min = arr[j];
                loc = j;
            }
        }

        temp = arr[i];

        arr[i] = arr[loc];

        arr[loc] = temp;
    }

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i)
    {
        cout << "\n"<< arr[i];
    }
}
#include <iostream>
using namespace std;

void printReverse(int n)
{
    if (n <= 0)
    {
        cout << "Please enter a positive integer." << endl;
    }
    else if (n == 1)
    {
        cout << n << " ";
    }
    else
    {
        cout << n << " ";
        printReverse(n - 1); 
    }
}

int main()
{
    int num;
    cout << "Enter a Number= ";
    cin >> num;
    cout << "Numbers in reverse order= ";
    printReverse(num);
    return 0;
}

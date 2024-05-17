#include <iostream>
using namespace std;
int main()
{
  int j = 1, i = 1, n;
  cout << "Enter any number==";
  cin >> n;
  while (i <= n)
  {
    j = j * i;
    i++;
  }
  cout << "Factorial Value of " << n << "=" << j;
  return 0;
}
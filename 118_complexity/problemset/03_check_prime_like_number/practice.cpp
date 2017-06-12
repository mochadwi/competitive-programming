#include <iostream>
#include <math.h>

using namespace std;

int main() {
  int n, count;
  int number[1000];
  
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    count = 0;  
    cin >> number[i];

    int j = 2;
    while ((j <= trunc(number[i] / 3)) && count <= 2)
    {
      if (number[i] % j == 0)
      {
        count++;
      }
      j++;
    }
    
    if (count <= 2)
    {
      cout << "YA";
    } else
    {
      cout << "BUKAN";
    }

    cout << endl;
  }

  return 0;
}
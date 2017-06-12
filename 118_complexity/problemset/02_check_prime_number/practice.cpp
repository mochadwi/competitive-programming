#include <iostream>
#include <math.h>

using namespace std;

int main() {
  int n, count;
  int number[1000];
  bool isPrime;
  
  // cout << "How many number: ";
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    count = 0;  
    cin >> number[i];

    if (number[i] > 1)
    {
      for (int j = 2; j <= trunc(sqrt(number[i])); j++)
      {
        if (number[i] % j == 0)
        {
          count++;
        }
      }
      
      if (count == 0)
      {
        cout << "YA";
      } else
      {
        cout << "BUKAN";    
      }
    } else
    {
      cout << "BUKAN";
    }

    cout << endl;
  }

  return 0;
}
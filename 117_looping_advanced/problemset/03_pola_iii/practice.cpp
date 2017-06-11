#include <iostream>

using namespace std;

int main() {
  int n, k;
  k = 0;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      if (k == 10)
        k = 0;
      cout << k++;
    }
    cout << endl;
  }
}
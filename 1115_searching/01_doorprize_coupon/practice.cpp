#include <iostream>
#include <string>
using namespace std;

const int limit = 101;
int n = 0; // how much coupon to compare
int x = 0; // coupon x

int main()
{
  cin >> n;
  long coupon[n];

  for (int i = 0; i < n; i++)
  {
    cin >> coupon[i];
  }
  
  for (int i = 0; i < n; i++)
  {
    cout << coupon[i];
    if (i < n-1) cout << " ";
    else cout << endl;
  }

  return 0;
}
#include <iostream>
#include <string>
using namespace std;

const int limit = 101;
int n = 0; // how much coupon to compare
int x = 0; // coupon x

int main()
{
  cin >> n;
  cin >> x;
  long coupon[n];
  int min[n];

  for (int i = 0; i < n; i++)
  {
    cin >> coupon[i];
    min[i] = ((coupon[i] - x) < 0) ? (coupon[i] - x) * -1 : (coupon[i] - x); // absolute value, deviance
  }

  for (int i = 0; i < n; i++)
  {
    cout << min[i];
    if (i < n-1) cout << " ";
    else cout << endl;
  }

  return 0;
}
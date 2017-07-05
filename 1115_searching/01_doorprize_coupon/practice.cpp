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
  long value = 0;
  bool couponBool[n];
  int min[n];
  int tempMin;

  for (int i = 0; i < n; i++)
  {
    cin >> coupon[i];
    min[i] = ((coupon[i] - x) < 0) ? (coupon[i] - x) * -1 : (coupon[i] - x); // absolute value, deviance
  }

  tempMin = min[0];
  couponBool[0] = true;
  for (int i = 1; i < n; i++)
  {
    if (min[i] <= tempMin)
    {
      couponBool[i] = true;
      tempMin = min[i];
    }
  }

  for (int i = 0; i < n; i++)
  {
    if (couponBool[i])
    {
      cout << min[i];
    }

    if (i < n-1) cout << " ";
    else cout << endl;
  }

  cout << endl;

  return 0;
}
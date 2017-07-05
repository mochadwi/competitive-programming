#include <iostream>
#include <string>
#include <cmath>
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
    couponBool[i] = false;
    cin >> coupon[i];
    min[i] = abs(coupon[i] - x);
    // min[i] = ((coupon[i] - x) < 0) ? (coupon[i] - x) * -1 : (coupon[i] - x); // absolute value
    // cout << "min["<<i<<"]: " << min[i] << endl;
  }

  // find minimum value
  tempMin = min[0];
  for (int i = 0; i < n; i++)
  {
    if (min[i] <= tempMin)
    {
      couponBool[i] = true;
      tempMin = min[i];
    }
  }

  for (int i = 0; i < n-1; i++)
  {
    // if (couponBool[i] && ((coupon[i] < ))
    // {
    //   cout << coupon[i];
    // } 
  }

  cout << endl;

  return 0;
}
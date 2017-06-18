#include <iostream>

using namespace std;

short a, b, x, k = 0;

int f(short x)
{
  short ret = ((a * x) + b);
  if (ret < 0) return ret * -1; // absolute val
  
  return ret; 
}

int main()
{

  int res = 1;

  cin >> a >> b >> k >> x;
  
  if ((1 <= k && k <= 5) && 
  (-5 <= a && a <= 5) && 
  (-5 <= b && b <= 5) &&
  (-5 <= x && x <= 5))
  {
    for (int i = 0; i < k; i++)
    {
      res *= f(x);
    }
    // res = pow(f(x), k);
    cout << res << endl;
  }

  return 0;
}
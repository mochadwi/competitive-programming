#include <iostream>

using namespace std;

int a, b, x, k = 0;

int f(int x)
{
  int ret = ((a * x) + b);
  if (ret < 0) return ret * -1; // absolute val
  
  return ret; 
}

int power(int x, int n)
{
  int m;
  if (n == 0) return 1;
  if (n % 2 == 0)
  {
    m = power(x, n / 2);
    return m * m;
  } else return x * power(x, n - 1);
}

int main()
{

  int res = 1;

  cin >> a >> b >> k >> x;
  
  res = f(x);

  if ((1 <= k && k <= 5) && 
  (-5 <= a && a <= 5) && 
  (-5 <= b && b <= 5) &&
  (-5 <= x && x <= 5))
  {
    if (k >= 2)
    {
      for (int i = 0; i < k - 1; i++)
      {
        res *= f(x);
      }
    }
    // res = power(f(x), k);
  }

  cout << res << endl;

  return 0;
}
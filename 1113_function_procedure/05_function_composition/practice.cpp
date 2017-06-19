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
  
  res = x;

  for (int i = 0; i < k; i++)
  {
    // cout << res << endl;
    res = f(res);
    // cout << res << endl;
  }

  cout << res << endl;

  return 0;
}
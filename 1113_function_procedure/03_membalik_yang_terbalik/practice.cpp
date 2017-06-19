#include <iostream>

using namespace std;

// Global Var
long n, a, b = 0;

long reverse(long x)
{
  long temp, ret = 0;
  
  temp = x;

  // cout << "=== reverse ===" << endl;
  while (temp > 0)
  {
    ret = (ret * 10) + (temp % 10);
    temp /= 10;
    // cout << "Ret: " << ret << "; Temp: " << temp;
    // cout << endl;
  }

  return ret;
}

int main()
{

  cin >> a;
  cin >> b;

  cout << reverse(reverse(a) + reverse(b)) << endl;

  return 0;
}
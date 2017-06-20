#include <iostream>
#include <math.h>
using namespace std;

int const limit = 100;
int n, d = 0;
int x[limit], y[limit];

int f(int x1, int y1, int x2, int y2)
{
  // cout << "x1: " << x1 << endl;
  // cout << "x2: " << x2 << endl;
  // cout << "y1: " << y1 << endl;
  // cout << "y2: " << y2 << endl;
  // int a = ((x2 - x1) < 0) ? (x2 - x1) * -1 : (x2 - x1);
  // int b = ((y2 - y1) < 0) ? (y2 - y1) * -1 : (y2 - y1);
  // cout << "a: " << a << endl;
  // cout << "b: " << b << endl;
  // cout << "|x2 - x1|^d + |y2 - y1|^d: |" << a << "| + |" << b << "|" << endl;
  // int res = ;
  // for (int i = 0; i < d - 1; i++)
  // {
  //   a *= a;
  //   b *= b;
  // }

  return pow(abs(x1 - x2), d) + pow(abs(y2 - y1), d);
}

int main()
{
  cin >> n >> d;

  for (int i = 0; i < n; i++)
  {
    cin >> x[i] >> y[i];
  }

  int min = f(x[0], y[0], x[1], y[1]);
  int max = f(x[0], y[0], x[1], y[1]);

  for (int i = 0; i < n; i++)
  {
    // cout << x[i] << " " << y[i] << endl;
    // cout << "f: " << endl;
    for (int j = 0; j < n; j++)
    {
      if (j == i) continue;

      int curr = f(x[i], y[i], x[j], y[j]);
      if (min > curr) min = curr;
      else if (max < curr) max = curr;
    }
  }

  cout << min << " " << max << endl;

  return 0;
}
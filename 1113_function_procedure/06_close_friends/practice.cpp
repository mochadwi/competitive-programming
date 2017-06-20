#include <iostream>
#include <math.h>
using namespace std;

int const limit = 100;
int n, d = 0;
int x[limit], y[limit];

int close(int xi, int xj, int yi, int yj)
{
  // cout << "xi: " << xi << endl;
  // cout << "xj: " << xj << endl;
  // cout << "yi: " << yi << endl;
  // cout << "yj: " << yj << endl;
  int a = ((xj - xi) < 0) ? (xj - xi) * -1 : (xj - xi);
  int b = ((yj - yi) < 0) ? (yj - yi) * -1 : (yj - yi);
  // cout << "a: " << a << endl;
  // cout << "b: " << b << endl;
  // cout << "|xj - xi|^d + |yj - yi|^d: |" << a << "| + |" << b << "|" << endl;
  // int res = ;
  return pow(a, d) + pow(b, d);
}

int main()
{
  cin >> n >> d;

  for (int i = 0; i < n; i++)
  {
    cin >> x[i] >> y[i];
  }

  for (int i = 0; i < n - 1; i++)
  {
    // cout << x[i] << " " << y[i] << endl;
    cout << "close: " << endl;
    cout << close(x[i], x[i+1], y[i], y[i+1]) << endl;
  }

  return 0;
}
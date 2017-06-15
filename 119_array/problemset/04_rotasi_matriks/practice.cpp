#include <iostream>

using namespace std;

const int limit = 100;
int n, m = 0;
int a[limit][limit], b[limit][limit];

int main()
{
  cin >> n;
  cin >> m;

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cin >> a[i][j];
    }
  }

  // rotate
  for (int j = 0; j < m; j++)
  {
    for (int i = n - 1; i >= 0; i--)
    {
      cout << a[i][j];
      if (i != 0) cout << " ";
    }
    cout << endl;
  }

  // for (int i = 0; i < n; i++)
  // {
  //   for (int j = 0; j < m; j++)
  //   {
  //     cout << b[i][j] << " ";
  //   }
  //   cout << endl;
  // }

  return 0;
}
#include <iostream>

using namespace std;

const int limit = 100;
int n, m, p = 0;
int a[limit][limit], b[limit][limit], c[limit][limit];

int main()
{

  int temp = 0;

  cin >> n;
  cin >> m;
  cin >> p;

  // matrix A
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cin >> a[i][j];
    }
  }

  // matrix B
  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < p; j++)
    {
      cin >> b[i][j];
    }
  }

  // matrix multiplication
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < p; j++)
    {
      for (int k = 0; k < m; k++)
      {
        temp += a[i][k] * b[k][j];
        cout << temp;
        if (k != 0) cout << " ";
      }
      cout << endl;
    }
  }

  return 0;
}
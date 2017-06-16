#include <iostream>

using namespace std;

const long limit = 100000;
int n, q, x, y = 0; // N = col; Q = swap occurs; x, y = col to swap
long rowA[limit], rowB[limit];
char a, b; // A, B = row identification; ws = whitespace

void swap(long &a, long &b)
{
  long temp = a;
  a = b;
  b = temp;
}

int main()
{
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> rowA[i];
  }

  for (int i = 0; i < n; i++)
  {
    cin >> rowB[i];
  }

  cin >> q;
  for (int i = 0; i < q; i++)
  {
    char ws;
    // cin >> a >> ws >> x >> ws >> b >> ws >> y;
    cin >> a >> x >> b >> y;
    a = toupper(a);
    b = toupper(b);

    // cout << a << " " << b;

    // if (x <= n && y <= n)
    // {
      if (a == 'A' && b == 'B')
      {
        // cout << rowA[x-1] << " " << rowB[y-1] << endl;
        swap(rowA[x-1], rowB[y-1]);
        // cout << rowA[x-1] << " " << rowB[y-1] << endl;
        // cout << a << b;
      } else if (a == 'A' && b == 'A')
      {
        swap(rowA[x-1], rowA[y-1]);
      } else if (a == 'B' && b == 'A')
      {
        swap(rowB[x-1], rowA[y-1]);
      } else if (a == 'B' && b == 'B')
      {
        swap(rowB[x-1], rowB[y-1]);
      }
    // }
  }

  for (int i = 0; i < n; i++)
  {
    // cout << "A: " << rowA[i] << " ";
    // cout << "B: " << rowB[i] << endl;
    cout << rowA[i];
    if (i < n - 1) cout << " ";
  }

  cout << endl;

  for (int i = 0; i < n; i++)
  {
    // cout << "A: " << rowA[i] << " ";
    // cout << "B: " << rowB[i] << endl;
    cout << rowB[i];
    if (i < n - 1) cout << " ";
  }

  cout << endl;

  return 0;
}
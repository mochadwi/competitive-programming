#include <iostream>

using namespace std;

const long limit = 100000;
int n, q, x, y = 0; // N = col; Q = swap occurs; x, y = col to swap
long rowA[limit], rowB[limit];
char a, b; // A, B = row identification

// void swap()

int main()
{
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> rowA[i];
    cin >> rowB[i];
  }

  // for (int i = 0; i < n; i++)
  // {
  //   cout << "A: " << rowA[i] << endl;
  //   cout << "B: " << rowB[i] << endl;
  // }

  cin >> q;
  for (int i = 0; i < q; i++)
  {
    cin >> a >> x >> b >> y;
    cout << a << x << b << y;
    if (tolower(a) == 'a' && tolower(b) == 'b')
    {
      // swap(a[x-1], b[y-1]);
    }
  }

  return 0;
}
#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int idx;
  long n, x, min = 0;

  cin >> n >> x;

  long c[n], m[n];

  for (int i=0; i<n; i++)
  {
    cin >> c[i];
    m[i] = abs(x - c[i]);
  }

  // initial state for min value
  min = m[0];
  idx = 0;
  for (int i=0; i<n; i++)
  {
    // check for minimum value
    if (min > m[i])
    {
      min = m[i];
      idx = i;
    } else if (min == m[i])
    {
      if (c[idx] > c[i]) idx = i;
    }
  }

  cout << c[idx] << endl;

	return 0;
}
#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;

const long limit = 1000000;
long prim[limit], outp[limit];
long n, x, it, y, l = 0;
long i = 0;
bool tr;

void searchPrime(long n)
{
  long i, j;
  long frek;
  x = 0;
  for (i = 0; i < n / 2; i++)
  {
    frek = 0;
    if (i > 1)
    {
        for (j = 2; j <= (trunc(sqrt(i))); j++)
        {
          if (i % j == 0)
          {
            frek++;
          }
        }
        if (frek == 0)
        {
          prim[x] = i;
          x++;
        }
    }
  }
}

void showPrime(long n)
{
  cout << "Display PRIME" << endl;
  for (int i = 0; i < n; i++)
  {
    cout << prim[i];
    if (i < n - 1) cout << " ";
  }
  cout << endl;
}

void factorate(long n)
{
  long x, z;
  x = 0;
  if (n == 1)
  {
    // exit(EXIT_FAILURE);
  } else
  {
    // cout << "=== Factorate ===" << endl;
    while (n % prim[x] != 0)
    {
      // cout << "prim[" << x << "]: " << prim[x] << " ";
      x++;
      // cout << "x: " << x << ", ";
    }
    // cout << "; ";
    z = n / prim[x];
    outp[y] = prim[x];
    // cout << "z: " << z << "; " 
    // << "prim[" << x << "]: " << prim[x] << "; " 
    // << "outp[" << y << "]: " << outp[y] << endl;
    y++;
    factorate(z);
  }
}

void showFactor(long n)
{
  cout << "Display FACTOR" << endl;
  for (int i = 0; i < n; i++)
  {
    cout << outp[i];
    if (i < n - 1) cout << " ";
  }
  cout << endl;
}

int main()
{
  tr = false;
	y = 0;
	cin >> n;
	l = n;
	searchPrime(n);
  // showPrime(x);
	factorate(n);
  // showFactor(y);
	it = 1;

	for (i = 0; i < y - 1; i++)
	{
    // cout << "= OUTPUT INNER LOOP =";
		if (outp[i] == outp[i+1])
		{
			it++;
		} else if (outp[i] != outp[i+1])
		{
			if (it == 1)
			{
				cout << outp[i] << " x ";
				it = 1;
			} else
			{
				cout << outp[i] << '^' << it << " x ";
				it = 1;
			}
		}
    // cout << "outp[" << i << "]: " << outp[i] << "; " << endl;
    // if (i < y - 1) cout << " x "
	}

	if (it == 1)
	{
		cout << outp[i] << endl;
	} else
	{
		cout << outp[i] << '^' << it << endl;
	}

  return 0;
}
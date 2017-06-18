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
  // cout << trunc(sqrt(n)) << endl;
  for (i = 2; i <= trunc(sqrt(n)); i++)
  // for (i = 2; i <= (n / 2); i++)
  {
    while (n % i == 0)
    {
      // cout << endl << "start while" << endl;
      n /= i;
      prim[x] = i;
      x++;
      // cout << "i: " << i << "; ";
      // cout << "n: " << n << "; ";
      // if (i < trunc(sqrt(n))) cout << endl << "end while" << endl;
    }
    // cout << endl << "open for" << endl;
    // cout << "i: " << i << "; ";
    // cout << "n: " << n << "; ";
    // cout << "x: " << x << "; ";
    // cout << "trunc(sqrt(" << n << ")): "
    // << trunc(sqrt(n)) << endl;
    if (i > trunc(sqrt(n))) prim[x] = n;
    // cout << endl << "for" << endl;
  }
  // cout << endl;
}

void showPrime(long n)
{
  cout << "Display PRIME" << endl;
  for (int i = 0; i <= n; i++)
  {
    cout << prim[i];
    if (i < n) cout << " ";
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

void displayOut(long y)
{
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
}

void displayPri(long y)
{
  it = 1;

	for (i = 0; i < y; i++)
	{
    // cout << "= OUTPUT INNER LOOP =";
		if (prim[i] == prim[i+1])
		{
			it++;
		} else if (prim[i] != prim[i+1])
		{
			if (it == 1)
			{
				cout << prim[i] << " x ";
				it = 1;
			} else
			{
				cout << prim[i] << '^' << it << " x ";
				it = 1;
			}
		}
    // cout << "prim[" << i << "]: " << prim[i] << "; " << endl;
    // if (i < y - 1) cout << " x "
	}

	if (it == 1)
	{
		cout << prim[i] << endl;
	} else
	{
		cout << prim[i] << '^' << it << endl;
	}
}

int main()
{
  tr = false;
	y = 0;
	cin >> n;
	l = n;
	searchPrime(n);
  // showPrime(x);
	// factorate(n);
  // showFactor(y);
	// display(y);
  displayPri(x);

  return 0;
}
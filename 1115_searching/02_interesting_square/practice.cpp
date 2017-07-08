#include<iostream>
using namespace std;

int n, m, k, l = 0;

int main() 
{
    cin >> n >> m >> k;
    int petak[n][m], hasil[n*m];

    for (int i = 0; i < n; i++)
    {
        hasil[l] = 0;
        for (int j = 0; j < m; j++)
        {
            cin >> petak[i][j];
        }
        l++;
    }

    l = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
          if (i == j) hasil[l] = petak[i][j] * petak[i][j+1] * petak[i+1][j];
        }
        l++;
    }

    return 0;
}
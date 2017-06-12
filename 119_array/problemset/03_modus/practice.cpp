#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int max = 1000;
    int count, n = 0;
    long a[max], b[max];

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a, a);

    for (int i = 0; i < n; i++)
    {
        // if (a[i] == a[i + 1])
        // {
        //     count = i;
        // }
        cout << a[i];
    }

    // cout << a[count] << endl;

    return 0;
}
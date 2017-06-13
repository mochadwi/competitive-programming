#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int max = 1000;
    long mode, curr, n, low, high = 0;
    long a[max], freq[max];

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i]; // user-defined data
        freq[i] = 0;
    }

    // bubble sort
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[i])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    cout << endl;

    // find mode
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                freq[i]++;
                mode = a[i];
                cout << "freq[" << i << "]: " << freq[i] << endl;
                cout << "mode: " << mode << endl;
            }
        }
    }

    high = freq[0];
    mode = a[high];
    for (int i = 1; i < n; i++)
    {
        if (freq[i] > high)
        {
            high = i;
            mode = a[high];
            cout << "high: " << high << endl;
        }
    }

    // cout << "Modus: ";

    if (mode < a[high])
    {
        cout << a[high] << endl;
    } else
    {
        cout << mode << endl;
    }

    return 0;
}
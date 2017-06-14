#include <iostream>
#include <array>

using namespace std;

int main()
{
    int max = 1000;
    int freq[max];
    long mode, count, n, low, high = 0;
    long a[max];


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
        // cout << a[i] << " ";
    }

    // cout << endl;

    // find highest "mode"
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] < 1)
            {
                // cout << "element < 1" << endl;
                break;
            }

            if (a[i] == a[j])
            {
                a[j] = 0;
                freq[i]++;
            }
        }
        // cout << "freq[" << i << "]: " << freq[i] << endl;
    }

    high = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (freq[i] >= freq[high])
        {
            high = i;
            // cout << "high: " << high << endl;
        }
    }

    mode = a[high];

    cout << mode << endl;

    return 0;
}
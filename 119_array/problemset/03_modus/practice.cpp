#include <iostream>

using namespace std;

int main()
{
    int max = 100000;
    long mode, count, f, n, low, high = 0;
    long a[max];
    long freq[max];

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i]; // user-defined data
        freq[i] = 0;
    }

    // bubble sort
    // for (int i = 0; i < n - 1; i++)
    // {
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (a[j] < a[i])
    //         {
    //             int temp = a[i];
    //             a[i] = a[j];
    //             a[j] = temp;
    //         }
    //     }
    // }

    // for (int i = 0; i < n; i++)
    // {
        // cout << a[i] << " ";
    // }

    // cout << endl;

    // find highest "mode"
    mode = a[0];
    // f = 1;
    high = 0;
    for (int i = 0; i < n - 1; i++)
    {
        count = 1;
        if (a[i] > 0)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (a[i] == a[j])
                {
                    a[j] = 0;
                    freq[i]++;
                    // count++;
                }
                if (freq[i] >= freq[high])
                {
                    high = i;
                    mode = a[high];
                    // cout << "high: " << high << endl;
                }
            }
            // cout << "freq[" << i << "]: " << freq[i] << endl;
        }
    }

    cout << mode << endl;

    return 0;
}
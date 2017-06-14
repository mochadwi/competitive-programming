#include <iostream>
#include <array>

using namespace std;

int main()
{
    int max = 1000;
    long mode, count, f, n, low, high = 0;
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
        // cout << a[i] << " ";
    }

    // cout << endl;

    // find highest "mode"
    mode = a[0];
    f = 1;
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
                    // freq[i]++;
                    count++;
                }
            }
            // cout << "freq[" << i << "]: " << freq[i] << endl;
            if (count > f)
            {
                f = count;
                mode = a[i];
            } else
            {
                if (count == f)
                {
                    if (mode < a[i])
                    {
                        f = count;
                        mode = a[i];
                    }
                }
            }
        }
    }

    // high = 0;
    // for (int i = 0; i < n - 1; i++)
    // {
    //     if (freq[i] >= freq[high])
    //     {
    //         high = i;
    //         // cout << "high: " << high << endl;
    //     }
    // }

    // mode = a[high];
    cout << mode << endl;

    return 0;
}
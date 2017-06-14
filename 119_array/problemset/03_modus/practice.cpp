#include <iostream>

using namespace std;

const long limit = 100000;
long mode, f, n, low, high = 0;
long a[limit];
long freq[limit];

long partition(long left, long right);
void quickSort(long left, long right);

int main()
{
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
    // quick sort
    quickSort(0, n - 1);

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
        if (a[i] > 0)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (a[i] == a[j])
                {
                    a[j] = 0;
                    freq[i]++;
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

long partition(long left, long right)
{
    int pivot_element = a[left];
    int lb = left, ub = right;
    int temp;
 
    while (left < right)
    {
        while(a[left] <= pivot_element)
            left++;
        while(a[right] > pivot_element)
            right--;
        if (left < right)
        {
            temp        = a[left];
            a[left]  = a[right];
            a[right] = temp;
        }
    }
    a[lb] = a[right];
    a[right] = pivot_element;
    return right;
}
 
void quickSort(long left, long right)
{
    if (left < right)
    {
        long pivot = partition(left, right);
        quickSort(left, pivot-1);
        quickSort(pivot+1, right);
    }
}
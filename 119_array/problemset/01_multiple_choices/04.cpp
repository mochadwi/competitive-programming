#include <iostream>

using namespace std;

int main()
{
    int a[10], b[10];
    
    for (int i = 0; i < 10; i++)
    {
        a[i] = 3 * i % 10;
    }

    for (int i = 0; i < 10; i++)
    {
        b[i] = 9 * a[((i + 3) % 10)] + 5 % 10;
    }

    cout << b[8];
    return 0;
}
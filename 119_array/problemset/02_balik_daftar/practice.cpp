#include <iostream>

using namespace std;

int main()
{
    int n = 100;
    int count = 0;
    long a[n];
    string line;

    while (getline(cin, line)) {
        a[count++] = stoi(line,nullptr,0);
    }

    for (int i = (count - 1); i >= 0; i--)
    {
        cout << a[i] << endl;
    }

    return 0;
}
#include <iostream>
using namespace std;

int main() {
  int n, b, i, total;
  total = 0;
  cin >> n;
  for (i = 1; i <= n; i++) {
    cin >> b;
    total += b;
  }
  cout << total << endl;
}
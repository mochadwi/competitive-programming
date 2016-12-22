#include <iostream>

using namespace std;

int n, bil;

int main() {
  n = 0;
  cin >> n;
  bil = n;
  for (int i = 1; i <= n; i++) {
    if (n % i == 0) {
      cout << n / i << endl;  
    }
  }
}
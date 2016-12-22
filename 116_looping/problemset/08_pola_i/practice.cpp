#include <iostream>

using namespace std;

int n, pola;

int main() {
  cin >> n;
  cin >> pola;
  for (int i = 1; i <= n; i++) {
    if (i % pola == 0) {
      cout << "*";
    } else {
      cout << i;
    }
    if (i == n) {
      cout << endl;
    } else {
      cout << " ";
    }
  }
}
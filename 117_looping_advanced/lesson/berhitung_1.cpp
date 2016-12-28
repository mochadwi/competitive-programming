#include <iostream>

using namespace std;

int n, m;

int main() {
  cin >> n;
  cin >> m;
  for (int i = 1; i <= n; i++) {
    if (i == m) {
      break;
    }

    cout << i << endl;
  }

  cout << "selesai" << endl;
}
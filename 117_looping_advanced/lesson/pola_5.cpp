#include <iostream>

using namespace std;
int factorial(int n);
int c(int n, int k);

int main() {
  int i, j, jml;
  int n, k;
  cout << "Masukkan jumlah: " << endl;
  cin >> jml;
  
  n = -1;
  for (i = jml; i >= 1; i--) {
    n++;
    k = 0;
    for (j = 1; j <= jml; j++) {
      if (j >= i) {
        cout << c(n, k++);
      }
      cout << " ";
    }
    cout << endl;
  }
}

int factorial(int n) {
  if (n == 0) {
    return 1;
  } else {
    return n * factorial(n - 1);
  }
}

int c(int n, int k) {
  return factorial(n) / (factorial(k) * factorial(n - k));
}
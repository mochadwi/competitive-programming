#include <iostream>

using namespace std;
int factorial(int n);
int c(int n, int k);

int main() {
  int i, j, jml;
  int n, k;
  cout << "Masukkan jumlah: " << endl;
  cin >> jml;
  
  for (i = 0; i < jml; i++) {
    n = 1;
    for (j = 1; j < (jml - i); j++) {
      // cout << "   ";
      cout << " * ";
    }
    // for (k = 0; k <= i; k++) {
    //   cout << "      " << "*";
    //   n = n * (i - k) / (k + 1);
    // }
    cout << endl << endl;
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
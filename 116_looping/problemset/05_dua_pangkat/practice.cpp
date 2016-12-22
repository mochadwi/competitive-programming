#include <iostream>
#include <math.h>
using namespace std;

int m, n;

int main() {
  // Deklarasi + Inisialisasi awal
  m = 1;

  // Data masukkan
  cin >> n;
  while (m < n) {
    m *= 2;
  }
  
  if (m == n) {
    cout << "ya" << endl;
  } else {
    cout << "bukan" << endl;
  }
}
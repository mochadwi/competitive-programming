#include <iostream>

using namespace std;

int main() {
  int i, j, jml;
  cout << "Masukkan jumlah: " << endl;
  cin >> jml;
  
  for (i = jml; i >= 1; i--) {
    for (j = 1; j <= jml; j++) {
      if (j >= i) {
        cout << "*";
      }
      cout << " ";
    }
    cout << endl;
  }

  // downto : >=
  // to : <=
  for (i = jml - 1; i >= 1; i--) {
    for (j = jml; j >= 1; j--) {
      if (j <= i) {
        cout << "*";
      }
      cout << " ";
    }
    cout << endl;
  }
}
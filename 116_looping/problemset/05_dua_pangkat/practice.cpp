#include <iostream>
#include <math.h>
using namespace std;

int data, bil, pangkat;
string ket;

int main() {
  // Deklarasi + Inisialisasi awal
  data = bil = pangkat = 0;
  ket = "";

  // Data masukkan
  cin >> data;
  while (bil < data) {
    bil = pow(2, ++pangkat);    
    if (bil == data) {
      ket = "ya";
    } else {
      ket = "bukan";
    }
    // cout << bil << " * ";
  }

  cout << ket << endl;
}
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
  while (bil < data && pangkat < 16) {
    bil = pow(2, ++pangkat);    
    if (bil != data) {
      ket = "bukan";
    } else {
      ket = "ya";
    }
    // cout << pangkat << endl;
    // cout << bil << " * ";
  }

  cout << ket << endl;
}
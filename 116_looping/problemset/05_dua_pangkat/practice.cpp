#include <iostream>
#include <math.h>
using namespace std;

long int data, bil, pangkat;
string ket;

int main() {
  // Deklarasi + Inisialisasi awal
  data = bil = pangkat = 0;

  // Data masukkan
  cin >> data;
  while (bil < data) {
    bil = pow(2, ++pangkat);    
    // cout << bil << " * ";
  }
  if (bil != data) {
    // ket = "bukan";
    cout << "bukan" << endl;
  } else {
    // ket = "ya";
    cout << "ya" << endl;
  }
  // cout << ket << endl;
}
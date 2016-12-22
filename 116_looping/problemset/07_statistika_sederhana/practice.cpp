#include <iostream>

using namespace std;

int n, bil, nilaiMin, nilaiMax;

int main() {
  cin >> n;
  cin >> bil; // receive first input
  nilaiMin = nilaiMax = bil;
  for (int i = 1; i < n; i++) { // stop before n
    cin >> bil; 
    if (bil > nilaiMax) {
      nilaiMax = bil;
    }
    if (bil < nilaiMin) {
      nilaiMin = bil;
    }
  }
  cout << nilaiMax << " " << nilaiMin << endl;
}
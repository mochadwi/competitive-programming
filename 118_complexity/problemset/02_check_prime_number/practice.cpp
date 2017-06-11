#include <iostream>

using namespace std;

int main() {
  int n, primeNumber;
  bool isPrime;
  
  // cout << "How many number: ";
  cin >> n;

  for (int i = 0; i < n; i++) {
    
    cin >> primeNumber;

    if (primeNumber > 1 && (((primeNumber % 3 != 0) && primeNumber % 2 != 0) || 
        (primeNumber == 2) || (primeNumber == 3))) {
      cout << "YA";
    } else {
      cout << "BUKAN";
    }

    cout << endl;
  }

  return 0;
}
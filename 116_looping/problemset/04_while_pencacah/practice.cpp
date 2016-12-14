#include <iostream>
#include <fstream>
#include <assert.h>

using namespace std;

int main(void) {
  int bil, total = 0;
  string line;
  while (getline(cin, line)) {
    total += stoi(line,nullptr,0);
  }
  cout << total << endl;
}
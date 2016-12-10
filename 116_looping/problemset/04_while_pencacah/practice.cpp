#include <iostream>
#include <fstream>
#include <assert.h>

using namespace std;

int main(void) {
  int data, total = 0;
  ifstream fin;

  fin.open("practice.cpp", ios::in);
  assert(!fin.fail());
  fin >> data;

  while (!fin.eof()) {
    // cout << data << endl;
    total += data;
    fin >> data;
  }
  fin.close();
  assert(!fin.fail());
  cout << total << endl;
  return 0;
}
#include <iostream>
#include <string>
using namespace std;

const int limit = 101;

string modify(string s1, string s2, string s3, string s4)
{
  string res = s1 + s2 + s3 + s4;

  return res;
}

int main()
{
  cin.getline(s1, limit);
  cin.getline(s2, limit);
  cin.getline(s3, limit);
  cin.getline(s4, limit);

  cout << modify(s1, s2, s3, s4) << endl;
  
  return 0;
}
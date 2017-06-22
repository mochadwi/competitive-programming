#include <iostream>
#include <string>
using namespace std;

string deletion(string s1, string s2)
// int deletion(string s1, string s2)
{
  int i, j = 0;
  int len1 = s1.length();
  int len2 = s2.length();
  bool match;
  string temp = s1;
  string res = "";
  int count = 0;

  for (i = 0; i < (len1 - len2 + 1); i++)
  {
    match = true;
    for (j = 0; j < len2; j++)
    {
      if (s1[i+j] != s2[j])
      {
        match = false;
        break;
      }
    }

    if (match)
    {
      temp = s1;
      count++;
      cout << "i: " << i << endl;
      cout << "delete: " << temp.erase(i, j) << endl;
    }
  }

  cout << "res: " << res <<endl;
  return res;
  // return count;
}

int main()
{
  cout << "s1: serbaser" << endl;
  cout << "s2: ser" << endl;
  cout << deletion("serbaser", "ser") << endl;
  return 0;
}
#include <iostream>
#include <string>
using namespace std;

string deletion(string s1, string s2)
// int deletion(string s1, string s2)
{
  int i, j = 0;
  int len1 = s1.length();
  int len2 = s2.length();
  bool correct[len1];
  bool match;
  string res = "";
  int count = 0;

  // init correct
  for (i = 0; i < len1; i++)
  {
    correct[i] = true;
  }

  for (i = 0; i < (len1 - len2 + 1); i++)
  {
    // match = true;
    for (j = 0; j < len2; j++)
    {
      if (s1[i+j] != s2[j])
      {
        // match = false;
        break;
      }
      correct[i+j] = false;
    }

    // if (match)
    if (correct[i])
    {
      res = res + s1[i];
    }
  }

  // cout << "res: " << res <<endl;
  return res;
  // return count;
}

int main()
{
  // cout << "s1: serbaser" << endl;
  // cout << "s2: ser" << endl;
  cout << deletion("serbaser", "ser") << endl;
  return 0;
}
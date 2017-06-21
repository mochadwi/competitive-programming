#include <iostream>
#include <string>
using namespace std;

// string deletion(string s1, string s2)
int deletion(string s1, string s2)
{
  int len1 = s1.length();
  int len2 = s2.length();
  bool match;
  string res = "";
  int count = 0;

  for (int i = 0; i < (len1 - len2 + 1); i++)
  {
    match = true;
    for (int j = 0; j < len2; j++)
    {
      if (s1[i+j] != s2[j])
      {
        match = false;
        break;
      }
    }

    if (match)
    {
      count++;
    }

    res += s1[i] + '-';
  }

  // return res;
  return count;
}

int main()
{
  cout << deletion("serbaser", "ser") << endl;
  return 0;
}
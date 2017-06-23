#include <iostream>
#include <string>
using namespace std;

string deletion(string s1, string s2)
{
  int i, j = 0;
  int len1 = s1.length();
  int len2 = s2.length();
  int count = 0;
  string del = "";
  bool match;

  for (i = 0; i < len1; i++)
  {
    match = true;
    count = 0;
    for (j = 0; j < len2; j++)
    {
      if (s1[i+j] != s2[j])
      {
        match = false;
        break;
      }
      count++;
    }

    // if (count == len2)
    if (match)
    {
      del = s1.erase(i, j);
      len1 = s1.length() - len2 + 1;
      i -= j;
      // cout << s1 << endl;
    }
  }

  return s1;
}

int main()
{
  string s1, s2;
  cin >> s1 >> s2;
  cout << deletion(s1, s2) << endl;
  // deletion(s1, s2);
  
  return 0;
}
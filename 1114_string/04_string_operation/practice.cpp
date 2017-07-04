#include <iostream>
#include <string>
using namespace std;

const int limit = 101;
char s1[limit], s2[limit], s3[limit], s4[limit];
string result = "";

string strDelete(string s1, string s2)
{
  int i, j;
  bool match;
  
  // for (i = 0; i < s1.length() - s2.length() + 1; i++)
  for (i = 0; i < s1.length(); i++)
  {
    match = true;
    for (j = 0; j < s2.length(); j++)
    {
      if (s1[i+j] != s2[j])
      {
        match = false;
        break;
      }
    }

    if (match)
    {
      // cout << "s1: " << s1 << endl;
      // cout << "i: " << i << endl;
      string del = s1.erase(i, j);
      break;
      // i -= j;
      // if (i < 0) i *= -1;
      // cout << "i: " << i << endl;
      // cout << "s1: " << s1 << endl;
    }
  }

  return s1;
}

string strInsert(string s1, string s3, string s4)
{
  int i, j;
  bool match;

  for (i = 0; i < s1.length(); i++)
  {
    match = true;
    for (j = 0; j < s3.length(); j++)
    {
      if (s1[i+j] != s3[j])
      {
        match = false;
        break;
      }
    }

    if (match)
    {
      s1.insert(i+j, s4);
      i = i + j + (s4.length() - 1);
      // cout << "s4.length(): " << s4.length() << endl;
      // cout << "s4[0]: " << s4[0] << endl;
      // cout << "i: " << i << endl;
    }
  }

  return s1;
}

int main()
{
  cin.getline(s1, limit);
  cin.getline(s2, limit);
  result = strDelete(s1, s2);
  cin.getline(s3, limit);
  cin.getline(s4, limit);
  result = strInsert(result, s3, s4);

  cout << result << endl;
  
  return 0;
}
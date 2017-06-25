#include <iostream>
#include <string>
using namespace std;

const int limit = 101;
char s1[limit], s2[limit], s3[limit], s4[limit];

string modify(string s1, string s2, string s3, string s4)
{
  int i, j, k;
  bool match;
  
  for (i = 0; i < s1.length() - s2.length() + 1; i++)
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
      string del = s1.erase(i, j);
      i -= j;
    }
  }

  return s1;
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
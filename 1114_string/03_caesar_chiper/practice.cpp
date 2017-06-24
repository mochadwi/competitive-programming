#include <iostream>
#include <string>
using namespace std;

string word = "";
int k = 0;

string caesarChiper(string word, int k)
{
  int i, j = 0;
  string res = "";

  for (i = 0; i < word.length(); i++)
  {
    word[i] += k;
    if (word[i] > 'z')
    {
      j = word[i] - 'z';
      // cout << j << endl;
      word[i] = 'a' - 1 + j;
      // cout << word[i] << endl;
    }
  }

  return word;
}

int main()
{
  cin >> word >> k;

  cout << caesarChiper(word, k) << endl;
  
  return 0;
}
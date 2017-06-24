#include <iostream>
#include <string>
using namespace std;

const int limit = 100;
const char alphabet[limit] = "abcdefghijklmnopqrstuvwxyz";
char message[limit] = "";
int k = 0;

string caesarChiper(string message, int key)
{
  int i, j = 0;
  char ch;
  string res = "";

  for (i = 0; i < message.length(); i++)
  {
    ch = tolower(message[i]);
    if (ch >= 'a' && ch <= 'z')
    {
      ch = ch + key;
      if (ch > 'z') ch = ch - 'z' + 'a' - 1;

      message[i] = ch;
    }
  }

  return message;
}

int main()
{
  cin.getline(message, 100);
  cin >> k;

  cout << caesarChiper(message, k) << endl;
  
  return 0;
}
#include <iostream>
#include <string>
using namespace std;

const int limit = 101;
const char alphabet[limit] = "abcdefghijklmnopqrstuvwxyz";
char message[limit] = "";
int k = 0;

string caesarChiper(string message, int key)
{
  int i, j = 0;
  char ch;
  string res = "";

  for (i = 0; message[i] != '\0'; i++)
  {
    ch = tolower(message[i]);
    res += (ch + key - 'a') % 26 + 'a';
  }

  return res;
}

int main()
{
  cin.getline(message, 101);
  cin >> k;

  cout << caesarChiper(message, k) << endl;
  
  return 0;
}
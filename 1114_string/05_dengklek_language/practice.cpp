#include <iostream>
#include <string>
using namespace std;

const int limit = 101;
const char alphabet[limit] = "abcdefghijklmnopqrstuvwxyz";
char message[limit] = "";
int k = 0;

string dengklekConversion(string message)
{
  int i, j = 0;
  char ch;
  string res = "";

  for (i = 0; message[i] != '\0'; i++)
  {
    ch = message[i];
    if (ch == tolower(ch))
    {
      ch = toupper(ch);
    } else
    {
      ch = tolower(ch);
    }
    
    res += ch;
  }

  return res;
}

int main()
{
  cin.getline(message, limit);

  cout << dengklekConversion(message) << endl;
  
  return 0;
}
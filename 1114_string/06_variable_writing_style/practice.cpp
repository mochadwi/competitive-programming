#include <iostream>
#include <string>
using namespace std;

const int limit = 101;
const char alphabet[limit] = "abcdefghijklmnopqrstuvwxyz";
char message[limit] = "";
int k = 0;

string styleConversion(string message)
{
  int i, j = 0;
  char ch;
  string res= "";

  for (i = 0; message[i] != '\0'; i++)
  {
    ch = message[i];

    // cout << "message: " << message << endl;
    if (ch == '_')
    {
      // cout << "UNDERSCORE" << endl;
      // cout << "message[" << i << "]: " << ch << endl;
      message.erase(i, 1);
      // cout << "i: " << i << endl;
      message[i] = toupper(message[i]);
      // cout << "message[" << i << "]: " << ch << endl;
      // cout << "message: " << message << endl;
    } else if (ch == toupper(ch))
    {
      // cout << "UPPERCASE" << endl;
      // cout << "message[" << i << "]: " << ch << endl;
      if (i < message.length()+1) 
      {
        message.insert(i, "_");
        i++;
      }
      // cout << "i: " << i << endl;
      message[i] = tolower(message[i]);
      
      // cout << "message[" << i << "]: " << ch << endl;
      // cout << "message: " << message << endl;
    }
    
    // res += ch;
  }

  return message;
}

int main()
{
  cin.getline(message, limit);

  cout << styleConversion(message) << endl;
  
  return 0;
}
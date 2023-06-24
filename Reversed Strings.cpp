#include <string>
using namespace std;

string reverseString(string str)
{
  for(int i = 0; i < str.size()/2; ++i)
  {
    str[i] ^= str[str.size()-i-1];
    str[str.size()-i-1] ^= str[i];
    str[i] ^= str[str.size()-i-1];
  }
  
  return str;
}

#include <string>
using namespace std;

string rot13(string msg)
{
  for(unsigned long i = 0; i < msg.size(); ++i)
  {
    if(msg[i] > 96 && msg[i] < 110 || msg[i] >= 64 && msg[i] < 78)
      msg[i] = char((int)msg[i]+13);
    else if(msg[i] >= 110 && msg[i] < 123 || msg[i] >= 78 && msg[i] < 91)
      msg[i] = char((int)msg[i]-13);
  }
  
  return msg;
}

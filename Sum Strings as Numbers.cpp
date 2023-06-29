#include <string>

std::string sum_strings(const std::string& a, const std::string& b) {
  bool add = false;
  int u;
  std::string str = "";

  for(unsigned long i = 0; i < a.size() || i < b.size(); ++i)
  {
    if(add)
    {
      u = 1;
      add = false;
    }
    else
      u = 0;

    if(i < a.size())
      u += int(a[a.size()-i-1])-48;

    if(i < b.size())
      u += int(b[b.size()-i-1])-48;

    if(u > 9)
    {
      add = true;
      u %= 10;
    }

    str = char(u+48) + str;
  }
  
  if(add)
    str = '1' + str;

  return str;
}

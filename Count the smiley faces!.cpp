#include <algorithm>
int countSmileys(std::vector<std::string> arr)
{  
  int k = 0;
  
  for(unsigned long i = 0; i < arr.size(); ++i)
  {
    if(arr[i][1] == ')' || arr[i][1] == 'D')
      ++k;
    else if(arr[i][1] == '-' || arr[i][1] == '~')
      if(arr[i][2] == ')' || arr[i][2] == 'D')
        ++k;
  }
  
  return k;
}

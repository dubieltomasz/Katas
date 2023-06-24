#include <cmath>

class ASum
{
  public:
  static long long findNb(long long m)
  {
    long long n = 1;
    long long sum = n;
    
    while(sum < m)
    {
      ++n;
      sum += n*n*n;
    }
    
    return sum == m ? n : -1;
  }
};

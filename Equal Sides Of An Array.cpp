#include <vector>
#include <numeric>
using namespace std;

int find_even_index (const vector <int> numbers)
{
  int l = 0, p = std::accumulate(numbers.begin()+1,numbers.end(),0);
  
  for(unsigned long i = 0; i < numbers.size(); i++)
  {
    if(l == p)
      return i;
    else
    {
      l += numbers[i];
      p -= numbers[i+1];
    }
  }
  
  return -1;
}

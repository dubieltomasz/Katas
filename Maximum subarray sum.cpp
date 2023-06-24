#include <vector>

int maxSequence(const std::vector<int>& arr)
{
  int sum = 0, maxSum = 0;
  
  for(unsigned long i = 0; i < arr.size(); ++i)
  {
    sum + arr[i] > 0 ? sum += arr[i] : sum = 0;
    
    if(sum > maxSum)
       maxSum = sum;
  }
      
    return maxSum;
}

#include <vector>

using namespace std;

vector<vector<long long>> subMatrix(vector<vector<long long>> &m, unsigned long &r)
{
  vector<vector<long long>> m2;
  
  for(unsigned long i = 1; i < m.size(); ++i)
  {
    vector<long long> m3;
    
    for(unsigned long j = 0; j < m.size(); ++j)
      if(j != r)
        m3.push_back(m[i][j]);
    
    m2.push_back(m3);
  }
  
  return m2;
}

long long determinant(vector<vector<long long>> m)
{
  if(m.size() == 1)
    return m[0][0];
  
  long long d = 0;
  
  for(unsigned long i = 0; i < m.size(); ++i)
    if(i % 2 == 0)
      d += m[0][i]*determinant(subMatrix(m,i));
    else
      d -= m[0][i]*determinant(subMatrix(m,i));
  
  return d;
}

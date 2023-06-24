#include <cmath>
namespace Triangle
{
  bool isTriangle(int a, int b, int c)
  {
    return a<(long)b+c && c<(long)a+b && b<(long)a+c;
  }
};

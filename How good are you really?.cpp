#include <vector>

bool betterThanAverage(std::vector<int> classPoints, int yourPoints) {
  double avg = yourPoints;
  
  for(auto i = 0; i < classPoints.size(); ++i)
    avg += classPoints[i];
  
  avg /= classPoints.size()+1;
  
  return yourPoints > avg;
}

#include <string>

unsigned int points(std::string str)
{
  unsigned int score = 0;

  for(auto i : str) score += (int)i-96;

  return score;
}

std::string highestScoringWord(const std::string &str)
{
  std::string word = "", result = "";
  unsigned int maxPoints = 0;

  for(unsigned long i = 0; i <= str.size(); ++i)
  {
    if(i == str.size() || str[i] == ' ')
    {
      if(points(word) > maxPoints)
      {
        maxPoints = points(word);
        result = word;
      }
      
      word = "";
    }
    else
      word += str[i];
  }

  return result;
}

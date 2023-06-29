#include <vector>
#include <string>

std::vector<std::string> string_to_array(const std::string& s) {
  std::vector<std::string> array;
  std::string word = "";

  for(unsigned long i = 0; i <= s.size(); ++i)
  {
    if(s[i] == ' ' || i == s.size())
    {
      array.push_back(word);
      word = "";
    }
    else
      word += s[i];
  }

  return array;
}

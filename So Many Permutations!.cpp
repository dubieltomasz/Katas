#include <string>
#include <vector>

std::vector<std::string> permutations(std::string s) {
  std::sort(s.begin(),s.end());
  std::vector<std::string> array = {s};
  
  while(std::next_permutation(s.begin(),s.end()))
    array.push_back(s);
  
  return array;
}

#include <string>
#include <vector>

std::string range_extraction(std::vector<int> args) {
  std::string str = std::to_string(args[0]);
  int sequence = 0;
  
  for(unsigned long i = 1; i < args.size(); ++i)
  {
    if(args[i] == args[i-1] + 1)
    {
      ++sequence;
      
      if(i == args.size()-1 && sequence > 1)
        str += "-" + std::to_string(args[i]);
      else if(i == args.size()-1)
        str += "," + std::to_string(args[i]);
    }
    else
    {
      if(sequence == 0)
        str += "," + std::to_string(args[i]);
      else if(sequence == 1)
        str += "," + std::to_string(args[i-1]) + "," + std::to_string(args[i]);
      else
        str += "-" + std::to_string(args[i-1]) + "," + std::to_string(args[i]);
      
      sequence = 0;
    }
    std::cout << args[i] << " " << sequence << " " << str << std::endl;
  }
  
  return str;
}

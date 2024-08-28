#include <iostream>

int main()
{
  // Flush after every std::cout / std:cerr
  std::string input;
  std::cout << std::unitbuf;
  std::cerr << std::unitbuf;
  while (true)
  {

    // Uncomment this block to pass the first stage
    std::cout << "$ ";

    std::getline(std::cin, input);
    if (input == "exit 0")
    {
      return 0;
    }
    else if(input.substr(4)=="echo"){
      std::cout << input.substr(4,input.size())<<std::endl;  
    }else{
      std::cout << input << ": command not found\n";
    }
  }
}

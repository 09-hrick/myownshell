#include <iostream>

int main()
{
  // Flush after every std::cout / std:cerr
  std::string input;
  std::cout << std::unitbuf;
  std::cerr << std::unitbuf;
  std::cout << "$ ";
  while (std::getline(std::cin, input) && input != "exit 0")
  {
    if (input.find("echo") == 0)
    {
      std::cout << input.substr(5, input.size()) << std::endl;
    }
    else
    {
      std::cout << input << ": command not found\n";
    }
    std::cout << "$ ";
  }
  return 0;
}

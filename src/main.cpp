#include <iostream>

int main()
{
  // Flush after every std::cout / std:cerr
  std::string input;
  std::cout << std::unitbuf;
  std::cerr << std::unitbuf;
  while (input != "exit 0")
  {

    // Uncomment this block to pass the first stage
    std::cout << "$ ";

    std::getline(std::cin, input);
    std::cout << input << ": command not found\n";
  }
  return 0;
}

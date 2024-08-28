#include <iostream>

int main()
{
  // Flush after every std::cout / std:cerr
  std::string input;
  while (input != "exit 0")
  {
    std::cout << std::unitbuf;
    std::cerr << std::unitbuf;

    // Uncomment this block to pass the first stage
    std::cout << "$ ";

    std::getline(std::cin, input);
    std::cout << input << ": command not found\n";
  }
  return 0;
}

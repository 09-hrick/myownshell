#include <iostream>

int main() {
  // Flush after every std::cout / std:cerr
  while(true)
 { std::cout << std::unitbuf;
  std::cerr << std::unitbuf;

  // Uncomment this block to pass the first stage
  std::cout << "$ ";
  
  std::string input;
  std::getline(std::cin, input);
  std::cout << input << ": command not found\n";}
}

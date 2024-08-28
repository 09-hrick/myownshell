#include <iostream>

int main()
{
  // Flush after every std::cout / std:cerr
  std::string input;
  std::cout << std::unitbuf;
  std::cerr << std::unitbuf;
  std::string builtin[3] = {"echo", "exit", "type"};
  std::cout << "$ ";
  while (std::getline(std::cin, input) && input != "exit 0")
  {
    if (input.find("echo") == 0)
    {
      std::cout << input.substr(5, input.size()) << std::endl;
    }
    else if (input.find("type") == 0)
    {
      std::string cmd = input.substr(5, input.size());
      bool chkvalid = 0;
      for (std::string &builtins : builtin)
      {
        if (cmd.substr(0, 5) == builtins)
        {
          std::cout << cmd << " is a shell builtin\n";
          chkvalid = 1;
        }
      }
      if (!chkvalid)
      {
        std::cout << input << std::endl;
      }
    }
    else
    {
      std::cout << input << ": command not found\n";
    }
    std::cout << "$ ";
  }
  return 0;
}

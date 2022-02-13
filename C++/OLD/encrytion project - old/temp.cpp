#include <iostream>
#include <string>

int main ()
{
  std::string user_text_key;

  std::cout << "Please, enter your full name: ";
  std::getline (std::cin,user_text_key);
  std::cout << "Hello, " << user_text_key << "\n";

  return 0;
}

// string::find
#include <iostream>       // std::cout
#include <string>         // std::string

int main ()
{
  std::string str ("There are two needles in this haystack with needles.");
  std::string str2 ("needle");
  std::size_t found = str.find(str2);
    std::cout << "first 'needle' found at: " << found << '\n';

 
  return 0;
}


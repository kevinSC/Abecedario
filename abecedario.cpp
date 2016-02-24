// string::find
#include <iostream>       // std::cout
#include <string>         // std::string

using namespace std;
int main ()
{
  string str  = "There are two needles in this haystack with needles.";
  string str2 ("needle");
  size_t found = str.find(str2);
  cout << "first 'needle' found at: " << found % 3 << '\n';

 
  return 0;
}


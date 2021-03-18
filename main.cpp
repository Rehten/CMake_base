#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

string say_hello()
{
  return string("Hello, CMake World!");
}

int main()
{
  std::cout << say_hello() << std::endl;
  return EXIT_SUCCESS;
}

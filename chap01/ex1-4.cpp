#include <iostream>
#include <string>

int main()
{
    { std::string const s = "a string";
      std::cout << s << std::endl;

    { std::string const s = "another string";
      std::cout << s << std::endl; }}
    return 0;
}

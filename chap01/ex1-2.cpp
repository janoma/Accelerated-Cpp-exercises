#include <string>

int main()
{
    std::string const exclam = "!";
    std::string const message = "Hello" + ", world" + exclam; // not valid 
    return 0;
}

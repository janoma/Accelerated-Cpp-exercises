#include <iostream>
#include <string>

int main()
{
    std::cout << "Please enter your first name: ";
    
    std::string name;
    std::cin >> name;

    const std::string greeting = "Hello, " + name + "!";
    
    const int pad = 1;
    const int rows = pad * 2 + 1;

    const std::string::size_type cols = greeting.size() + 2;

    for (int r = 0; r != rows; ++r)
    {
        std::string::size_type c = 0;
        while (c != cols)
        {
            if (r == pad && c == pad)
            {
                std::cout << greeting;
                c += greeting.size();
            }
            else
            {
                if (r == 0 || r == rows - 1 ||
                    c == 0 || c == cols - 1)
                    std::cout << "*";
                ++c;
            }
        }
        std::cout << std::endl;
    }

    return 0;
}

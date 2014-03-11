#include <iostream>
#include <string>

int main()
{
    std::cout << "Please enter your first name: ";

    std::string name;
    std::cin >> name;

    std::string const greeting = "Hello, " + name + "!";

    int const pad = 1;
    int const rows = pad * 2 + 1;

    std::string::size_type const cols = greeting.size() + 2;

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

#include <iostream>
#include <string>

int main()
{
    std::cout << "Please enter your first name: ";

    std::string name;
    std::cin >> name;

    std::string const greeting = "Hello, " + name + "!";

    int const pad = 1;
    int const rows = pad * 2 + 3;

    std::string::size_type const cols = greeting.size() + pad * 2 + 2;

    std::string const spaces(cols - 2, ' ');
    for (int r = 0; r != rows; ++r)
    {
        std::string::size_type c = 0;
        while (c != cols)
        {
            if (r == 0 || r == rows - 1 ||
                c == 0 || c == cols - 1)
            {
                std::cout << "*";
                ++c;
            }
            else
            {
                if (r == pad + 1)
                {
                    if (c == pad + 1)
                    {
                        std::cout << greeting;
                        c += greeting.size();
                    }
                    else
                    {
                        std::cout << " ";
                        ++c;
                    }
                }
                else
                {
                    std::cout << spaces;
                    c += spaces.size();
                }
            }
        }
        std::cout << std::endl;
    }

    return 0;
}

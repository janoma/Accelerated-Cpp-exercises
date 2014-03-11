#include <iostream>
#include <string>

int main()
{
    std::cout << "Please enter your first name: ";

    std::string name;
    std::cin >> name;

    std::string const greeting = "Hello, " + name + "!";

    int const h_pad = 5; // Horizontal padding
    int const v_pad = 2; // Vertical padding
    int const rows = v_pad * 2 + 3;

    std::string::size_type const cols = greeting.size() + h_pad * 2 + 2;

    for (int r = 0; r != rows; ++r)
    {
        std::string::size_type c = 0;
        while (c != cols)
        {
            if (r == v_pad + 1 && c == h_pad + 1)
            {
                std::cout << greeting;
                c += greeting.size();
            }
            else
            {
                if (r == 0 || r == rows - 1 ||
                    c == 0 || c == cols - 1)
                    std::cout << "*";
                else
                    std::cout << " ";
                ++c;
            }
        }
        std::cout << std::endl;
    }

    return 0;
}

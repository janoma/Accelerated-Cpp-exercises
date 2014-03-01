#include <iostream>
#include <string>

int main()
{
    std::cout << "Please enter your first name: ";

    std::string name;
    std::cin >> name;

    const std::string greeting = "Hello, " + name + "!";

    std::string::size_type h_pad_user;
    std::string::size_type v_pad_user;
    std::cout << "Horizontal padding: ";
    std::cin >> h_pad_user;
    std::cout << "Vertical padding: ";
    std::cin >> v_pad_user;

    const std::string::size_type h_pad = h_pad_user;
    const std::string::size_type v_pad = v_pad_user;

    const std::string::size_type rows = v_pad * 2 + 3;

    const std::string::size_type cols = greeting.size() + h_pad * 2 + 2;

    for (std::string::size_type r = 0; r != rows; ++r)
    {
        std::string::size_type c = 0;
        while (c != cols)
        {
            // Note: the comparison (c == h_pad + 1) does not compile unless we
            // add -Wno-sign-compare to the Makefile. The correct way would be
            // to make h_pad be of the same type as c.
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

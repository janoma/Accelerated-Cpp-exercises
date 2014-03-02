#include <iomanip>
#include <ios>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main()
{
    std::cout << "Enter some integer values followed by end-of-file: ";

    int x;
    std::vector<int> integers;

    while (std::cin >> x)
        integers.push_back(x);

    typedef std::vector<int>::size_type vec_sz;
    vec_sz size = integers.size();

    if (size == 0)
    {
        std::cout << std::endl << "You must enter at least one number. "
                                  "Please try again." << std::endl;
        return 1;
    }

    // Sort the grades
    std::sort(integers.begin(), integers.end());

    vec_sz s = size / 4;

    // TODO: Write all the numbers in the list, even when integers.size()
    //       is not a multiple of 4.
    for (int q = 0; q < 4; q++)
    {
        std::cout << "Quartile " << (q + 1) << ": ";
        unsigned int i = size - 1 - q * s;
        while (i > size - 1 - q * s - s + 1 && i > 0)
        {
            std::cout << integers[i] << ", ";
            --i;
        }
        std::cout << integers[i] << std::endl;
    }
    return 0;
}

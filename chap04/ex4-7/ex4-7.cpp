#include <iostream>
#include <vector>
#include "reader.h"

double avg(std::vector<double> vec)
{
    double sum = 0;
    std::vector<double>::size_type i = 0;
    while (i != vec.size())
    {
        sum += vec[i];
        ++i;
    }
    return sum / vec.size();
}

int main()
{
    std::vector<double> numbers;
    read(std::cin, numbers);

    std::cout << "The average of the numbers is "
              << avg(numbers) << "." << std::endl;
}

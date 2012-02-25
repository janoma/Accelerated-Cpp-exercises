#include <iostream>
#include <string>
#include <vector>
#include "reader.h"

int main()
{
    std::vector<std::string> vec;
    read(std::cin, vec);
    
    // We count the number of words in the input
    std::cout << "The input has " << vec.size() << " words." << std::endl;
    
    return 0;
}

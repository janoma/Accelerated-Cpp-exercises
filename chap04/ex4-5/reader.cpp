#include "reader.h"

std::istream& read(std::istream& is, std::vector<std::string>& vec)
{
    std::string x;
    while (is >> x)
        vec.push_back(x);
    return is;
}

std::istream& read(std::istream& is, std::vector<double>& vec)
{
    double x;
    while (is >> x)
        vec.push_back(x);
    return is;
}

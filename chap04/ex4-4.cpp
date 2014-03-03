#include <iostream>
#include <string>
#include <iomanip>
#include <ios>

int len(double n)
{
    int len = 1;
    while (n / 10.0 >= 1)
    {
        ++len;
        n /= 10.0;
    }
    return len;
}

int main()
{
    double limit = 20.0;
    int col_len = len(limit) + 1;

    for (double i = 1.1; i <= limit; ++i)
    {
        std::streamsize prec = std::cout.precision();
        std::cout << std::setprecision(3) << i
                  << std::string(col_len - len(i), ' ') << i * i
                  << std::setprecision(prec) << std::endl;
    }

    return 0;
}

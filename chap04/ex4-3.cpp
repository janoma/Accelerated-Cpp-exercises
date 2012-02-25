#include <iostream>
#include <string>
#include <iomanip>

int len(int n)
{
    int len = 1;
    while (n / 10 >= 1)
    {
        ++len;
        n /= 10;
    }
    return len;
}

int main()
{
    int limit = 20;
    int col_len = len(limit) + 1;
    
    for (int i = 1; i <= limit; ++i)
    {
        std::cout << i << std::string(col_len - len(i), ' ') << i * i << std::endl;
    }
    
    return 0;
}

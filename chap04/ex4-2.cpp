#include <iostream>
#include <string>
#include <iomanip>

int main()
{
    int limit = 100;
    /* Commenting out since it's an unused variable. */
    //int col_1_len = 4;
    int col_2_len = 6;

    for (int i = 1; i <= limit; ++i)
    {
        std::cout << i << std::setw(col_2_len);
        std::cout << i * i << std::endl;
    }

    return 0;
}

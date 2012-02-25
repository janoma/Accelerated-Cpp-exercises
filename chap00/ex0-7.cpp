// This is an invalid program.
// The comment ends before it is supposed to end.
#include <iostream>

int main()
{
    /* This is a comment that extends over several lines
       because it uses /* and */ as its starting and ending delimiters*/
    std::cout << "Does this work?" << std::endl;
    return 0;
}

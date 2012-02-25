#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "reader.h"

bool compare(std::string x, std::string y)
{
    return x < y;
}

int main()
{
    std::vector<std::string> words;
    read(std::cin, words);
    
    // We count how many times each word ocurred
    sort(words.begin(), words.end());

    typedef std::vector<std::string>::size_type vec_sz;
    typedef std::string::size_type str_sz;

    vec_sz size = words.size();
    str_sz maxlen = 0;
    
    vec_sz i = 0;
    while (i != size)
    {
        maxlen = std::max(maxlen, words[i].size());
        ++i;
    }
    i = 0;
    while (i != size)
    {
        vec_sz j = i + 1;
        while (j != size && words[j] == words[i])
            ++j;
        std::cout << "\"" << words[i] << "\"" << std::string(maxlen - words[i].size(), ' ') << " appears ";
        if (j - i > 1)
            std::cout << (j - i) << " times.";
        else
            std::cout << "once.";
        std::cout << std::endl;
        i = j;
    }
    
    return 0;
}

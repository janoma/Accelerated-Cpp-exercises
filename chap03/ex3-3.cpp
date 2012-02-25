#include <iomanip>
#include <ios>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main()
{
    std::cout << "Write some words followed by end-of-file: ";

    std::string x;
    std::vector<std::string> words;

    while (std::cin >> x)
        words.push_back(x);

    typedef std::vector<std::string>::size_type vec_sz;
    vec_sz size = words.size();

    // Sort the words
    std::sort(words.begin(), words.end());

    vec_sz i = 0;
    while (i != size)
    {
        vec_sz j = i + 1;
        while (j != size && words[j] == words[i])
            ++j;
        std::cout << "\"" << words[i] << "\" appears ";
        if (j - i > 1)
            std::cout << (j - i) << " times.";
        else
            std::cout << "once.";
        std::cout << std::endl;
        i = j;
    }
    return 0;
}

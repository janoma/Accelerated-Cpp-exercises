#include <iomanip>
#include <ios>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

bool compareLength(std::string a, std::string b)
{
    return a.size() < b.size();
}

int main()
{
    std::cout << "Write some words followed by end-of-file: ";

    std::string x;
    std::vector<std::string> words;

    while (std::cin >> x)
        words.push_back(x);

    // Sort the words
    std::sort(words.begin(), words.end(), compareLength);

    std::cout << "Shortest word: " << words[0] << " (length: " <<
                 words[0].size() << ")" << std::endl;
    std::cout << "Longest word: " << words[words.size() - 1] << " (length: " <<
                 words[words.size() - 1].size() << ")" << std::endl;

    return 0;
}

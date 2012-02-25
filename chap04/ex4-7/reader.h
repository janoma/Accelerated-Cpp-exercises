#ifndef GUARD_reader_h
#define GUARD_reader_h

#include <iostream>
#include <string>
#include <vector>

std::istream& read(std::istream&, std::vector<std::string>&);
std::istream& read(std::istream&, std::vector<double>&);

#endif


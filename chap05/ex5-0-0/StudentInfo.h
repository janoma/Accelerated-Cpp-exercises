#ifndef GUARD_StudentInfo_h
#define GUARD_StudentInfo_h

#include <iostream>
#include <string>
#include <vector>

// Read homework grades from an input stream into a vector<double>
struct StudentInfo
{
    std::string name;
    double midterm, final;
    std::vector<double> homework;
};

bool compare(StudentInfo const&, StudentInfo const&);
std::istream& read(std::istream&, StudentInfo&);
std::istream& read_hw(std::istream&, std::vector<double>&);

#endif


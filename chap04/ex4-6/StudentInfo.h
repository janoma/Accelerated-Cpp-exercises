#ifndef GUARD_StudentInfo_h
#define GUARD_StudentInfo_h

#include <iostream>
#include <string>
#include <vector>
#include "median.h"

// Read homework grades from an input stream into a vector<double>
struct StudentInfo
{
    std::string name;
    double grade;
};


double grade(double, double, double);
bool compare(const StudentInfo&, const StudentInfo&);
std::istream& read(std::istream&, StudentInfo&);
std::istream& read_hw(std::istream&, std::vector<double>&);

#endif


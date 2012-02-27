#include "StudentInfo.h"

bool compare(const StudentInfo& x, const StudentInfo& y)
{
    return x.name < y.name;
}

std::istream& read(std::istream& is, StudentInfo& s)
{
    // read and store the student's name and midterm and final exam grades
    is >> s.name >> s.midterm >> s.final;

    // read and store all the student's homework grades
    read_hw(is, s.homework);

    return is;
}

// Read homework grades from an input stream into a vector<double>
std::istream& read_hw(std::istream& in, std::vector<double>& hw)
{
    if (in)
    {
        // get rid of previous contents
        hw.clear();

        // read homework grades
        double x;
        while (in >> x)
            hw.push_back(x);

        // clear the stream so that input will work for the next student
        in.clear();
    }
    return in;
}


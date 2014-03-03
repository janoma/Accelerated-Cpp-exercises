#include "StudentInfo.h"

double grade(double midterm, double final, double homework)
{
    return 0.2 * midterm + 0.4 * final + 0.4 * homework;
}

bool compare(const StudentInfo& x, const StudentInfo& y)
{
    return x.name < y.name;
}

std::istream& read(std::istream& is, StudentInfo& s)
{
    double midterm, final;

    // read and store the student's name and midterm and final exam grades
    is >> s.name >> midterm >> final;

    std::vector<double> homework;

    // read and store all the student's homework grades
    read_hw(is, homework);

    s.grade = grade(midterm, final, median(homework));

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


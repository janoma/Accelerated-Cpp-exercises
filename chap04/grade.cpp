#include <vector>
#include <stdexcept>
#include "grade.h"
#include "median.h"
#include "StudentInfo.h"

double grade(double midterm, double final, double homework)
{
    return 0.2 * midterm + 0.4 * final + 0.4 * homework;
}

double grade(double midterm, double final, const std::vector<double>& hw)
{
    if (hw.size() == 0)
        throw std::domain_error("Student has done no homework");
    return grade(midterm, final, median(hw));
}

double grade(const StudentInfo& s)
{
    return grade(s.midterm, s.final, s.homework);
}


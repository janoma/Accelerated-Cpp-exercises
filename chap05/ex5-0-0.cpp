#include <iomanip>
#include <ios>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <stdexcept>

#include "ex5-0-0/grade.h"
#include "ex5-0-0/StudentInfo.h"

// predicate to determine whether a student failed
bool fgrade(const StudentInfo& s)
{
    return grade(s) < 60;
}

// separate passing and failing student records: first try
std::vector<StudentInfo> extract_fails(std::vector<StudentInfo>& students)
{
    std::vector<StudentInfo> pass, fail;

    for (std::vector<StudentInfo>::size_type i = 0;
         i != students.size(); ++i)
    {
        if (fgrade(students[i]))
            fail.push_back(students[i]);
        else
            pass.push_back(students[i]);

    }
    students = pass;
    return fail;
}

int main()
{
    std::vector<StudentInfo> students;
    StudentInfo record;
    std::string::size_type maxlen = 0;

    // read and store all the records, and find the length of the longest name
    while (read(std::cin, record))
    {
        maxlen = std::max(maxlen, record.name.size());
        students.push_back(record);
    }

    // alphabetize the records
    std::sort(students.begin(), students.end(), compare);

    for (std::vector<StudentInfo>::size_type i = 0;
         i != students.size(); ++i)
    {
        // write the name, padded on the right to maxlength + 1 characters
        std::cout << students[i].name
                  << std::string(maxlen + 1 - students[i].name.size(), ' ');

        // compute and write the grade
        try
        {
            double final_grade = grade(students[i]);
            std::streamsize prec = std::cout.precision();
            std::cout << std::setprecision(3) << final_grade
                      << std::setprecision(prec);
        }
        catch (std::domain_error e)
        {
            std::cout << e.what();
        }

        std::cout << std::endl;
    }

    return 0;
}

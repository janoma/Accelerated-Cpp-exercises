#include <iomanip>
#include <ios>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <stdexcept>

double grade(double midterm, double final, double homework)
{
    return 0.2 * midterm + 0.4 * final + 0.4 * homework;
}

// Computes the median of a vector<double>.
// Note that calling this function copies the entire argument vector.
double median(std::vector<double> vec)
{
    typedef std::vector<double>::size_type vec_sz;

    vec_sz size = vec.size();
    if (size == 0)
        throw std::domain_error("Median of an empty vector");

        sort(vec.begin(), vec.end());

        vec_sz mid = size / 2;

        return size % 2 == 0 ? (vec[mid] + vec[mid - 1]) / 2 : vec[mid];
}

double grade(double midterm, double final, std::vector<double> const& hw)
{
    if (hw.size() == 0)
        throw std::domain_error("Student has done no homework");
    return grade(midterm, final, median(hw));
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

struct StudentInfo
{
    std::string name;
    double midterm, final;
    std::vector<double> homework;
};

std::istream& read(std::istream& is, StudentInfo& s)
{
    // read and store the student's name and midterm and final exam grades
    is >> s.name >> s.midterm >> s.final;

    // read and store all the student's homework grades
    read_hw(is, s.homework);

    return is;
}

double grade(StudentInfo const& s)
{
    return grade(s.midterm, s.final, s.homework);
}

bool compare(StudentInfo const& x, StudentInfo const& y)
{
    return x.name < y.name;
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


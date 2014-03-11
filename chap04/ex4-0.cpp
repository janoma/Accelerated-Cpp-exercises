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

int main()
{
    std::cout << "Please enter your first name: ";
    std::string name;
    std::cin >> name;
    std::cout << "Hello, " << name << "!" << std::endl;

    std::cout << "Please enter your midterm and final exam grades: ";
    double midterm, final;
    std::cin >> midterm >> final;

    std::cout << "Enter all your homework grades, "
                 "followed by end-of-file: ";
    std::vector<double> homework;

    read_hw(std::cin, homework);

    try
    {
        double final_grade = grade(midterm, final, homework);
        std::streamsize prec = std::cout.precision();
        std::cout << "Your final grade is " << std::setprecision(3)
                  << final_grade << std::setprecision(prec) << std::endl;
    }
    catch (std::domain_error)
    {
        std::cout << std::endl << "You must enter your grades. "
                                  "Please try again." << std::endl;
        return 1;
    }

    return 0;
}

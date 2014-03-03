#include <iomanip>
#include <ios>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

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

    // A variable into which to read
    double x;
    std::vector<double> homework;

    // Invariant:
    //   we have read count grades so far, and
    //   sum is the sum of the first count grades
    while (std::cin >> x)
        homework.push_back(x);

    typedef std::vector<double>::size_type vec_sz;
    vec_sz size = homework.size();

    if (size == 0)
    {
        std::cout << std::endl << "You must enter your grades. "
                                  "Please try again." << std::endl;
        return 1;
    }

    // Sort the grades
    std::sort(homework.begin(), homework.end());

    vec_sz mid = size / 2;
    double median = size % 2 == 0 ? (homework[mid] + homework[mid - 1]) / 2 : homework[mid];

    // Write the result
    std::streamsize prec = std::cout.precision();
    std::cout << "Your final grade is " << std::setprecision(3)
              << 0.2 * midterm + 0.4 * final + 0.4 * median
              << std::setprecision(prec) << std::endl;

    return 0;
}

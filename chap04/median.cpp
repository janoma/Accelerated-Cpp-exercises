#include <vector>
#include <algorithm>
#include <stdexcept>

// Computes the median of a vector<double>.
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


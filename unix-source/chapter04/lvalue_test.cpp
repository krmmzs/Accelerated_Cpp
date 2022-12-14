#include <stdexcept>
#include <vector>
#include <algorithm>
#include <iostream>

using std::domain_error;  using std::vector;
using std::istream;

double grade(double midterm, double final, double homework)
{
    return 0.2 * midterm + 0.4 * final + 0.4 * homework;
}

double median(vector<double> vec)
{
    typedef vector<double>::size_type vec_sz;
    vec_sz size = vec.size();
    if (size == 0)
        throw domain_error("median of an empty vector");
    sort(vec.begin(), vec.end());
    vec_sz mid = size / 2;
    return size % 2 == 0 ? (vec[mid] + vec[mid-1]) / 2 : vec[mid];
}

istream& read_hw(istream& in, vector<double>& hw) {
    hw.clear();
    if (in) {
        double x;
        while (in >> x) {
            hw.push_back(x);
        }
        in.clear();
    }

    return in;
}

double grade(double midterm, double final, const vector<double>& hw) {
    if (hw.size() == 0)
        throw domain_error("student has done no homework");
    return grade(midterm, final, median(hw));
}

vector<double> emptyvec() {
    vector<double> v;
    return v;
}

int main(void) {
    read_hw(std::cin, emptyvec());

    return 0;
}

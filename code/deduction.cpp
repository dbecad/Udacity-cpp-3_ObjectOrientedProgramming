#include <iostream>
#include <algorithm> 
#include <vector>

// template function comparison of two numbers
template <typename T>
bool func(T x, T y)
{
    return (x < y);
}

// template for printing
template <typename T>
void print(std::vector<T> v) 
{
    for (int i = 0; i < v.size(); i++) {
        std::cout << v[i] << " ";
    }
    std::cout << "\n";
}

//main function
int main() 
{
std::vector<double> v = {9,3,2,32.32,10.323,10.0003,4.9789};
std::vector<char> v2 = {'a','Z','M','x','Y','c','U'};

print(v);
// Deducing function return type
std::sort(v.begin(), v.end(), func<double>);
print(v);
// For input parameters as PrintVector we have total deduction,without specification
print(v2);
// this will support any type of that which has defined support for (in this case) < operator
std::sort(v2.begin(), v2.end(), func<char>);
print(v2);
}

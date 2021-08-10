#include <iostream>
#include <matplotlibcpp.h>
#include "SimpleLinearRegression.h"
// #include <vector>
// #include <algorithm>

// using namespace std;
namespace plt = matplotlibcpp;
using namespace linearRegressionMaths;

int main()
{
    // testing the methods from the custom made library.
    vector<int> v1 = {1, 2, 3, 4, 5};
    vector<int> v2 = {4, 5, 6, 7, 8};
    vector<int> temp = vectorMultiply(v1, v2);
    // testing the mean function
    cout << "Testing mean function from SimpleLinearRegression.h: \n";
    cout << "Mean of vector v1 is: " << mean(v1) << "\n";
    // testing the vector multiplication
    cout << "Vector multiplication element by element of v1 and v2 is: \n";
    for (auto i : temp)
    {
        cout << i << " ";
    }
    // testing the slope method
    cout << "\nSlope of v1 and v2 together is: " << calculateSlope(v1, v2);
    cout << "\nIntercept of v1 and v2 together is: " << calculateIntercept(v1, v2);
}
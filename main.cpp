#include <iostream>
#include "SimpleLinearRegression.h"
#include <vector>
#include <algorithm>

using namespace std;
using namespace linearRegressionMaths;

int main()
{
    // testing the methods from the custom made library.
    vector<int> v = {1, 2, 3, 4, 5};
    cout << "Testing mean function from SimpleLinearRegression.h: \n";
    cout << "Mean of vector v is: " << mean(v) << "\n";
}
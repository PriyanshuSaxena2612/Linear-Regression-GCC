#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>

using namespace std;

// namespace for containing all the methods in it.

namespace linearRegressionMaths
{
    // method to calculate mean.
    template <typename T>
    T mean(vector<T>);
    // method to calculate vector multiplication element by element
    template <typename T>
    vector<T> vectorMultiply(vector<T> &vector1, vector<T> &vector2);
    // method to calculate m and c for the equation y = mx + c.
    template <typename T, typename M>
    void calculateCoef(vector<T> &X, vector<T> &Y, M &m, M &c);
}

template <typename T>
T linearRegressionMaths::mean(vector<T> data)
{
    T mean = std::accumulate(data.begin(), data.end(), 0.0) / data.size();
    return mean;
}
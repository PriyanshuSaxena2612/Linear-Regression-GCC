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
    double mean(vector<T>);
    // method to calculate vector multiplication element by element
    template <typename T>
    vector<T> vectorMultiply(vector<T> &vector1, vector<T> &vector2);
    // method to calculate m and c for the equation y = mx + c.
    template <typename T>
    double calculateSlope(vector<T> &X, vector<T> &Y);
    template <typename T>
    double calculateIntercept(vector<T> &X, vector<T> &Y);
}

template <typename T>
double linearRegressionMaths::mean(vector<T> data)
{
    double mean = std::accumulate(data.begin(), data.end(), 0.0) / data.size();
    return mean;
}

template <typename T>
vector<T> linearRegressionMaths::vectorMultiply(vector<T> &vector1, vector<T> &vector2)
{
    vector<T> temp(vector1.size());
    if (vector1.size() == vector2.size() && vector1.size() != 0)
    {
        for (T i = 0; i < vector1.size(); i++)
        {
            temp[i] = (vector1[i] * vector2[i]);
        }
    }
    return temp;
}

template <typename T>
double linearRegressionMaths::calculateSlope(vector<T> &X, vector<T> &Y)
{
    double numerator = mean(vectorMultiply(X, Y)) - (mean(X) * mean(Y));
    double denominator = mean(vectorMultiply(X, X)) - (mean(X) * mean(X));
    return (numerator / denominator);
}

template <typename T>
double linearRegressionMaths::calculateIntercept(vector<T> &X, vector<T> &Y)
{
    double slope = calculateSlope(X, Y);
    double intercept = mean(Y) - slope * mean(X);
    return intercept;
}
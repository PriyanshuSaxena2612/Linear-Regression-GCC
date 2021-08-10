#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>

using namespace std;

// namespace for containing all the methods in it.

namespace linearRegressionMaths
{
    double M = 0;
    double C = 0;
    /*
        method to calculate mean.
    */
    template <typename T>
    double mean(vector<T>);
    /*
        method to calculate vector multiplication element by element
    */
    template <typename T>
    vector<T> vectorMultiply(vector<T> &vector1, vector<T> &vector2);
    /*
        Method to calculate slope of y = mx + c
    */
    template <typename T>
    double calculateSlope(vector<T> &X, vector<T> &Y, double &M);
    /*
        Method to calculate intercept of y = mx + c
    */
    template <typename T>
    double calculateIntercept(vector<T> &X, vector<T> &Y, double &C);
    /*
        Method to do predictions
    */
    template <typename T>
    vector<double> predict(vector<T> &testData, double &M, double &C);
    /*
        Method to calculate score
    */
    template <typename T>
    double score(vector<T> &truth, vector<T> &predicted);
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
double linearRegressionMaths::calculateSlope(vector<T> &X, vector<T> &Y, double &M)
{
    double numerator = mean(vectorMultiply(X, Y)) - (mean(X) * mean(Y));
    double denominator = mean(vectorMultiply(X, X)) - (mean(X) * mean(X));
    M = (numerator / denominator);
    return M;
}

template <typename T>
double linearRegressionMaths::calculateIntercept(vector<T> &X, vector<T> &Y, double &C)
{
    double slope = calculateSlope(X, Y, M);
    double intercept = mean(Y) - slope * mean(X);
    C = intercept;
    return C;
}

template <typename T>
vector<double> linearRegressionMaths::predict(vector<T> &testData, double &M, double &C)
{
    vector<double> temp(testData.size());
    if (testData.size())
    {
        for (T i = 0; i < testData.size(); i++)
        {
            temp[i] = M * testData[i] + C;
        }
    }
    return temp;
}

template <typename T>
double linearRegressionMaths::score(vector<T> &truth, vector<T> &predicted)
{
    double u, v;
    if (truth.size() == predicted.size() && truth.size() != 0)
    {
        for (T i = 0; i < truth.size(); i++)
        {
            u += (truth[i] - predicted[i]) * (truth[i] - predicted[i]);
            v += (truth[i] - mean(truth)) * (truth[i] - mean(truth));
        }
    }
    return (1 - u / v);
}
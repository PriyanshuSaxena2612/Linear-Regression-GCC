#include <iostream>
#include "SimpleLinearRegression.h"
using namespace linearRegressionMaths;

int main()
{
    double m = 0, c = 0;
    /*
        testing the methods from the custom made library
    */
    vector<double> v1 = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<double> v2 = {1, 3, 2, 5, 7, 8, 8, 9, 10, 12};
    vector<double> temp1 = vectorMultiply(v1, v2);
    /*
        testing the mean function
    */
    cout << "Testing mean function from SimpleLinearRegression.h: \n";
    cout << "Mean of vector v1 is: " << mean(v1) << "\n";
    /*
        testing the vector multiplication
    */
    cout << "Vector multiplication element by element of v1 and v2 is: \n";
    for (auto i : temp1)
    {
        cout << i << " ";
    }
    /*
        testing the slope method
    */
    cout << "\nSlope of v1 and v2 together is: " << calculateSlope(v1, v2, m);
    /*
        testing the intercept method
    */
    cout << "\nIntercept of v1 and v2 together is: " << calculateIntercept(v1, v2, c);
    /*
        calculating the values of m and c
    */
    cout << "\nm and c are: " << m << " " << c << "\n";
    /*
        Testing the Prediction method
    */
    vector<double> v1_prediction = predict(v1, m, c);
    cout << "The predicted values for v1 are:\n";
    for (auto i : v1_prediction)
    {
        cout << i << " ";
    }
    /*
        Testing the score
    */
    cout << "\nThe score of v1 and v2 is: " << score(v2, v1_prediction);
}
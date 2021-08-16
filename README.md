# Simple Linear Regression Library C++
A library made in c++ for simple linear regression.
## How to use this library:
Download SimpleLinearRegression.h and include the following library in your program.
```c++
    #include "SimpleLinearRegression.h"
    using linearRegressionMaths;
```
* Declare two double variables m and c in your main method.
```c++
    double m = 0, c = 0;
    // m is for slope and c is for intercept
```
* Take two vectors of equal size and pass them to the respective functions as mentioned below.
## Methods included in this library:
* calculateSlope
* calculateIntercept
* mean
* vectorMultiplication
* predict
* score
## About all the methods used:
* calculateSlope: Calculates the slope of the best fit line, takes an input of two vectors X and Y, to return a double value.
* calculateIntercept: Calculates the intercept of the best fit line, same params like calculateSlope and returns a double value.
* mean: Returns a double value of the mean of the vector passed as a parameter.
* vectorMultiplication: Takes two vectors X and Y and returns a vector of the same size containing the multiplication of element by element of X and Y.
* predict: Takes 3 params of a vector of testing data, slope, and intercept, and returns a vector of the predicted values of the testing data vector.
* score: Takes 2 params of vectors of truth values and predicted values, and returns a score <=1, telling how good the fit line is.
## Contributing
Pull requests are welcome. For major changes, please open an issue first to discuss what you would like to change.
Please make sure to update tests as appropriate.
## License
[MIT](https://choosealicense.com/licenses/mit/)

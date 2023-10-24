#include <stdio.h>
#include <math.h>

double findRoot(double min, double max, double (*function)(double), int maxIterations)
{
    double left = min;
    double right = max;
    double closestRoot = 0.0;

    int iterationCount = 0;
    while (left <= right && iterationCount <= maxIterations)
    {
        double mid = left + (right - left) / 2.0f;
        if (function(mid) == 0)
        {
            return mid;
        }

        if (function(mid) > 0)
        {
            if (function(left) > 0)
            {
                left = mid;
            }else{
                right = mid;
            }
        }else{
            if (function(left) < 0)
            {
                left = mid;
            }
            else
            {
                right = mid;
            }
        }
        printf("Iteration: %d new interval: [%lf,%lf] last function value: %lf\n", iterationCount+1, left, right, function(mid));
        closestRoot = mid;
        iterationCount++;
    }
    return closestRoot;
}

double function(double x){
    return pow(x,3) + (4 * pow(x,2)) - 10;
}

int main()
{
    double root = findRoot(1,5,function, 100);
    printf("value: %lf\n", root);
    return 0;
}
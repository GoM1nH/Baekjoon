#include <stdio.h>
#include <math.h>

int main(void) {
    
    double pi = acos(-1.0);
    double r, result1, result2;

    scanf("%lf", &r);

    result1 = pow(r,2) * pi;
    result2 = 2 * pow(r,2);

    printf("%.6lf\n%.6lf", result1, result2);

} //211102 solve
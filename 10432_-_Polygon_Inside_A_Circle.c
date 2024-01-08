#include <stdio.h>
#include <math.h>

int main()
{
    double r, n, polygon;
    while(scanf("%lf %lf", &r, &n) != EOF)
    {
        polygon = n*r*r*sin(2*acos(-1)/n)/2;
        printf("%.3lf\n", polygon);
    }
    return 0;
}

#include<stdio.h>
int main()
{
    double a,b,c,s,r,rose,violets,sunflowers,R,triangle;
    while(scanf("%lf%lf%lf",&a,&b,&c)==3)
    {
        s=(a+b+c)/2;
        triangle=sqrt(s*(s-a)*(s-b)*(s-c));
        r=triangle/s;
        rose= 3.141592653589793*(r*r);
        violets=triangle-rose;
        R=(a*b*c)/(4*triangle);
        sunflowers=(3.141592653589793*R*R)-triangle;

        printf("%.4lf %.4lf %.4lf\n",sunflowers,violets,rose);
    }
    return 0;
}


#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        double l,r=0,w,rad,area, pi = 3.141592653589793238;
        scanf("%lf",&l);
        r=l/5;
        w=(l*6)/10;
        rad=pi*r*r;
        area=(l*w)-rad;
        printf("%.2lf %.2lf\n",rad,area);
    }
    return 0;
}

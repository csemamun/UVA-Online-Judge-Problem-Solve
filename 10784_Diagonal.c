#include<stdio.h>
#include<math.h>
int main()
{
    long int a,b,i=0;
    double ans;
    while(scanf("%ld",&a)==1 &&a!=0)
    {
        ans=ceil((3+sqrt(9+(8.0)*a))/2.0);
        printf("Case %ld: %.0lf\n",++i,ans);
    }
    return 0;
}

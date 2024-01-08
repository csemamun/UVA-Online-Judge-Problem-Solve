#include<stdio.h>
int main()
{
    int i,n;
    while(scanf("%d",&n)!=EOF)
    {
        for(i=1; i<=n; i++)
        {
            double c,f,C;
            scanf("%lf %lf",&c,&f);
            C=((5.0/9.0)*f)+c;
            printf("Case %d: %.2lf\n",i,C);
        }
    }
    return 0;
}

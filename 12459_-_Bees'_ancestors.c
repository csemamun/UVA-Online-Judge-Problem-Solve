#include<stdio.h>
int main()
{
    long int a,n,m,i,sum;
    while(scanf("%ld",&a)==1)
    {
        if(a==0)
            break;
        n=0;
        m=1;
        for(i=1; i<=a; i++)
        {
            sum=n+m;
            n=m;
            m=sum;
        }
        printf("%ld\n",sum);
    }
    return 0;
}

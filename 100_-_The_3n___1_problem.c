#include<stdio.h>

int uva100(long long i,long long  j)
{
    long long  c=0;
    while(1)
    {
        c++;
        if(i==1)
            break;
        else if(i&1)
            i=(3*i)+1;
        else
            i=i/2;
    }
    return c;
}

int main()
{
    long long  i,j,cycle,max,temp;
    while(scanf("%lld%lld",&i,&j)!=EOF)
    {
        max=0;
        printf("%lld %lld",i,j);
        if(i>j)
         {
            temp=i;
            i=j;
            j=temp;
         }
        while(i<=j)
        {
            cycle=uva100(i,j);
            if(max<cycle)
                max=cycle;
            i++;
        }
        printf(" %d\n",max);
    }
    return 0;
}

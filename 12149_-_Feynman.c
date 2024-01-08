#include<stdio.h>
int main()
{
    int a;
    while(scanf("%d",&a)==1 && a!=0)
    {
        long int N,sum=0;
        for(N=1;N<=a;N++)
        sum=sum+(N*N);               //also can use this eqn: sum=(N*(N+1)*(2*N+1))/6;
        printf("%ld\n",sum);
    }
    return 0;
}

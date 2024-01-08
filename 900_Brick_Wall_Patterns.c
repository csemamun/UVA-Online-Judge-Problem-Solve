#include<stdio.h>
int main()
{
    int fibonacci[100];
    int n,i;
    while(scanf("%d",&n) && n>0)
    {
        fibonacci[0] =1;
        fibonacci[1] =1;
        for(i=2; i<=n; i++)
        {
            fibonacci[i] = fibonacci[i-1]+fibonacci[i-2];
        }
        printf("%d\n", fibonacci[n]);
    }
    return 0;
}

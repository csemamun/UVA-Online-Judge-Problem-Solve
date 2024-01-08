#include<stdio.h>
int main()
{
    long long int a,n,i;
    while(scanf("%lld",&n)!= EOF)
    {
        n = n/2 + 1;
        n = n*n;
        a = 6*n - 9;
        printf("%lld\n", a);
    }
    return 0;
}

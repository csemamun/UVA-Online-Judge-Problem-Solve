#include <stdio.h>

int main()
{
    long int n, sum;
    while(scanf("%ld", &n)==1 && n>=0)
    {
        sum=((n*(n+1))/2)+1;
        printf("%ld\n",sum);
    }
    return 0;
}

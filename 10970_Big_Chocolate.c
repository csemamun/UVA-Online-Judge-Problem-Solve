#include <stdio.h>
int main()
{
    int m, n, sum;
    while(scanf("%d %d", &m, &n)==2)
    {
        sum=(m*n)-1;
        printf("%d\n", sum);
    }
    return 0;
}

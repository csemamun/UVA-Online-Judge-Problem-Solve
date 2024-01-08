#include <stdio.h>
int main()
{
    int t, n, x, max, min, park;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &n);
        max = 0, min = 99;
        while(n--)
        {
            scanf("%d", &x);
            if(x > max) max = x;
            if(x < min) min = x;
        }
        park = (max - min)*2;
        printf("%d\n",park);
    }
    return 0;
}

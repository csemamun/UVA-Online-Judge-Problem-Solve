#include<stdio.h>
int main()
{
    int test,t, n, current, max;
    scanf("%d", &test);
    for (t = 1; t <= test; ++t)
    {
        max = 1;
        scanf("%d",&n);
        while (n--)
        {
            scanf("%d",&current);

            if (max < current)
                max = current;
        }
        printf("Case %d: %d\n", t, max);
    }
    return 0;
}

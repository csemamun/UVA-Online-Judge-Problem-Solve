#include <stdio.h>

int main()
{
    int test, a, b, c;
    while(scanf("%d", &test)==1)
    {
        while(test--)
        {
            scanf("%d %d %d", &a, &b, &c);
            if(a+b<=c || b+c<=a || c+a<=b)
                printf("Wrong!!\n");
            else
                printf("OK\n");
        }
    }
    return 0;
}

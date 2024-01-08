#include<stdio.h>
int main()
{
    long int x;
    int sum;

    while(scanf("%ld", &x))
    {
        if (x == 0)
            break;
        while (x/10!=0)
        {
            sum = 0;
            while (x != 0)
            {
                sum = sum + x%10;
                x = x/10;
            }
            x = sum;
        }
        printf("%ld\n", x);
    }
    return 0;
}

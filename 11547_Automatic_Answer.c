#include <stdio.h>
int main()
{
    int t,n, x, digit;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &n);
        x = (n*63+7492)*5-498;
        x = x/10;
        if(x < 0)
            x *= -1;
        digit = x %  10;
        printf("%d\n", digit);
    }
    return 0;
}

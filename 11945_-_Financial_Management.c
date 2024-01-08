#include<stdio.h>
int main()
{
    double sum = 0,x,i;
    for(i = 0;i<12; ++i)
    {
        scanf("%lf",&x);
        sum = sum + x;
    }
    int balance = sum/12;
    printf("$%.2f\n",balance);

    return 0;
}

#include <stdio.h>
#include <math.h>

int selfN[1000010];
int generator(int num)
{

    int sum = num;

    while(num > 0)
    {
        sum += num%10;

        num /= 10;
    }
    return sum;
}
int main()
{
    int i;
    for(i=1;i<=1000000;i++)
    {
        if(selfN[i] == 0)
            printf("%d\n",i);
        selfN[generator(i)] = 1;
    }
    return 0;
}

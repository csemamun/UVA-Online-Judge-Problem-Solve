#include<stdio.h>
int main()
{
    int i,j,num,temp,n, cycle_len, max_cycle;
    while(scanf("%d%d",&i,&j)!= EOF)
    {
        max_cycle=0;
        printf("%d %d ",i,j);
        if(i>j)
        {
            temp=j;
            j=i;
            i=temp;
        }
        for(num=i; num<=j; num++)
        {
            cycle_len=1;
            n=num;
            while(n>1)
            {
                if(n%2==0)
                    n=n/2;
                else
                    n=(3*n)+1;
                cycle_len++;
            }
            if (cycle_len >= max_cycle)
                max_cycle = cycle_len;
        }
        printf("%d\n",max_cycle);
    }
    return 0;
}

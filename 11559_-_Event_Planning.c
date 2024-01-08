#include<stdio.h>
int main()
{
    long n,b,t,w,price,cost,p,i,j,room;
    while(scanf("%ld%ld%ld%ld",&n,&b,&t,&w)==4)
    {
        cost=9999999;
        while (t--)
        {
            scanf("%ld",&price);
            for(j=0; j<w; j++)
            {
                scanf("%ld",&room);
                p=0;
                if(room>=n)
                {
                    p=price*n;
                    if(cost>p) cost=p;
                }
            }
        }
    if(cost>b)
        printf("stay home\n");
    else
        printf("%ld\n",cost);
    }
    return 0;
}

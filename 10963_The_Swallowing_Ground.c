#include<stdio.h>
int main()
{
    int a,b,t,n,d,f,s,i;
    scanf("%d",&t);
    while(t--)
    {
        f=0;
        scanf("%d",&n);
        scanf("%d %d",&a,&b);
        d =a-b;
        for(i=1; i<n; i++)
        {
            if(d!=a-b)
            {
                f=1;
            }
        }
        if(f==0)
            printf("yes\n");
        else
            printf("no\n");
        if(t>0)
        printf("\n");
    }
}

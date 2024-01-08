#include<stdio.h>
int main()
{
    int t,i,s,d,a,b;
    while(scanf("%d",&t)==1)
    {
        for(i=0;i<t;i++)
        {
            scanf("%d %d",&s,&d);
            if(s>=d && (s+d)%2==0)
            {
                a=(s+d)/2;
                b=(s-d)/2;
                printf("%d %d\n",a,b);
            }
            else
                printf("impossible\n");
        }
    }
            return 0;
}

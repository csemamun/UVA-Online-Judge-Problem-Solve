#include<stdio.h>
int main()
{
    int T,x,y,i;
    while(scanf("%d",&T)==1)
    {
        for(i=1; i<=T; i++)
        {
            scanf("%d%d",&x,&y);
            if(x>=y)
            {
                printf("MMM BRAINS\n");
            }
            else
                printf("NO BRAINS\n");
        }
    }
    return 0;
}

#include <stdio.h>
int main()
{
    int l,g,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&g,&l);
        if(l%g==0)
            printf("%d %d\n",g,l);
        else
            printf("-1\n");
    }
    return 0;
}

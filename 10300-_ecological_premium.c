#include<stdio.h>

int main()
{
    int T,n,t;
    scanf("%d",&T);
    for(t=0; t<T; t++)
    {
        scanf("%d",&n);
        int sum = 0,a,b,c,i;
        for(i=0; i<n; i++)
        {
            scanf("%d %d %d",&a, &b, &c);
            sum += a*c;
        }
        printf("%d\n",sum);
    }
    return 0;
}

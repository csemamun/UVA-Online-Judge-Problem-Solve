#include<stdio.h>
int main()
{
    int i,j,k,n,count,a[100000],mod;
    while(scanf("%d",&n)==1)
    {
        if (n==0)
            break;
        count=0;
        for(i=0; ; i++)
        {
            mod=n%2;
            if(mod==1)
                count++;
            a[i]=mod;
            if(n==0)
                break;
            n=n/2;
        }
        printf("The parity of ");
        for(j=i-1; j>=0; j--)
            printf("%d",a[j]);
        printf(" is %d (mod 2).\n",count);
    }
    return 0;
}

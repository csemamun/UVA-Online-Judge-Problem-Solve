#include<stdio.h>
int main()
{
    long int l,i,j,t,min,max,c=1,temp;
    char s[2000000];
    while(scanf("%s",&s)==1)
    {
        l=strlen(s);
        if(l==0) break;
        scanf("%ld",&t);
        {
            for(i=0;i<t;i++)
            {
                scanf("%ld%ld",&min,&max);
                if(i==0)
                    printf("Case %ld:\n",c);
                if(min>max)
                {
                    temp=min;
                    min=max;
                    max=temp;
                }
                for(j=min;j<max;j++)
                {
                    if(s[j]!=s[j+1])
                    {
                        printf("No\n");
                        break;
                    }
                }
                if(j==max)
                    printf("Yes\n");
            }
        }
    c++;
    }
    return 0;
}

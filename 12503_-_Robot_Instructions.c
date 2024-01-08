#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n,a,i;
        scanf("%d",&n);
        int j=1, pos=0;
        int ins[105]={0};
        char s[10], b[5];
        for(i=1; i<=n; i++)
        {
            scanf("%s",s);
            if (s[0]=='L')
                ins[i] = -1;
            else if (s[0]=='R')
                ins[i] = 1;
            else
            {
                scanf("%s %d", b, &a);
                ins[i] = ins[a];
            }
            pos= pos + ins[i];
        }
        printf("%d\n",pos);
    }
    return 0;
}

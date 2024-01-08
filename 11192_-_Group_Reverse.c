#include<stdio.h>
#include<string.h>
int main()
{
    int g,i,cnt,j,lenth;
    char str[110];
    while(scanf("%d",&g) && g!=0)
    {
        scanf("%s",str);
        lenth=strlen(str)/g;
        cnt=0;
        for(i=0;i<strlen(str);i++)
        {
            if(i%lenth==0)
            {
                cnt++;
                j=0;
            }
            printf("%c",str[cnt*lenth-j-1]);
            j++;
        }
        printf("\n");
    }
    return 0;
}

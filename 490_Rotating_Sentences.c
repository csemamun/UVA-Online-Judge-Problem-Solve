#include<stdio.h>
#include<string.h>

int main()
{
    char s[105][105];
    int k=0, i,j;
    int max_len=-1;
    while (gets(s[k]))
    {
        int len=strlen(s[k]);
        if(len>max_len)
            max_len=len;
        for(i=len;i<102;i++)
            s[k][i]=' ';
            k++;
    }
    for(i=0;i<max_len;i++)
    {
        for(j=k-1;j>=0;j--)
        {
            printf("%c",s[j][i]);
        }
        printf("\n");
    }
    return 0;
}

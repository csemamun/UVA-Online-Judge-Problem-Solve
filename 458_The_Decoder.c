#include<stdio.h>
#include<string.h>

int main()
{
    char s[1000];
    int i,len;
    while(gets(s))
    {
        len = strlen(s);
        for(i=0; i<len; i++)
            printf("%c",s[i]-7);
            printf("\n");
    }
    return 0;
}

#include<stdio.h>
#include<string.h>
int main()
{
    int t,i;
    char s[10];
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        scanf("%s",&s);
        if(strlen(s)>3)
            printf("3\n");
        else
        {
            if(s[0]=='o' && s[1]=='n')
                printf("1\n");
            else if(s[0]=='o' && s[2]=='e')
                printf("1\n");
            else if(s[1]=='n' && s[2]=='e')
                printf("1\n");
            else if(s[0]=='t' && s[1]=='w')
                printf("2\n");
            else if(s[0]=='t' && s[2]=='o')
                printf("2\n");
            else if(s[1]=='w' && s[2]=='o')
                printf("2\n");
        }
    }
    return 0;
}

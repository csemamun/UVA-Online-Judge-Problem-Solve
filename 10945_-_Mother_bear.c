#include<stdio.h>
#include<string.h>

int main()
{
    int len,len1,len2,i,j,bin;
    char s[1000],s1[1000],s2[1000];

    while(gets(s))
    {
        bin=0;
        len1=-1;
        len=strlen(s);
        if(len==4 && s[0]=='D' && s[1]=='O' && s[2]=='N' && s[3]=='E')
            break;
        for(i=0;i<len;i++)
        {
            if(s[i]!='.' && s[i]!=',' && s[i]!='?' && s[i]!='!' && s[i]!=' ')
            {
                len1++;
                s1[len1]=s[i];
            }
        }
        for(j=0;j<=len1;j++)
        {
            if(s1[j]!=s1[len1-j] && s1[j]!=(s1[len1-j]+32) && s1[j]!=(s1[len1-j]-32))
            {
                printf("Uh oh..\n");
                bin=1;
                break;
        }
      }

 if(bin==0)
 printf("You won't be eaten!\n");
 }
return 0;
}

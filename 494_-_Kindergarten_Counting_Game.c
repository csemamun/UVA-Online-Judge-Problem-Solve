#include<stdio.h>
int main()
{
    char s[1000000];
    int len,count,i;
    while(gets(s))
    {
        len=strlen(s);
        count=0;
        for(i=0;i<len;i++)
        {
            if((s[i] >= 'a' && s[i] <= 'z')||(s[i] >= 'A' && s[i] <= 'Z'))
                {
                    while((s[i] >= 'a' && s[i] <= 'z')||(s[i] >= 'A' && s[i] <= 'Z'))
                    {
                        if(i>len-1)
                            break;
                        i++;


                    }
                     count++;
                }
        }
        printf("%d\n",count);
    }
    return 0;
}

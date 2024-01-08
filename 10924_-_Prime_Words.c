#include<stdio.h>
int main()
{
    char str[1000];
    int ln,i;
    while(scanf("%s", &str)==1)
    {
        int sum=0;
        ln=strlen(str);
        for(i=0;i<ln;i++)
        {
            if(str[i]>='a' && str[i]<='z')
            {
                sum=sum + str[i]-96;
            }
            else
            {
                sum= sum + str[i]-38;
            }
        }
        int c=0;
        for(i=2;i<sum;i++)
        {
            if(sum%i==0)
                c++;
        }
        if(c==0)
            printf("It is a prime word.\n");
        else
            printf("It is not a prime word.\n");
    }
    return 0;
}

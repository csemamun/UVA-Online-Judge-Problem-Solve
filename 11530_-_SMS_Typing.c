#include<stdio.h>
int main()
{
    int i,j,n,sum;
    char ch[1000];
    scanf("%d",&n);
    getchar();

    for(i=1; i<=n; i++)
    {
        gets(ch);
        sum=0;

        for(j=0; ch[j]!='\0'; j++)
        {
            if(ch[j]=='a' || ch[j] =='d'||ch[j]=='g'||ch[j]=='j'||ch[j]=='m'||ch[j]=='p'||ch[j]=='t'||ch[j]=='w'||ch[j]==' ')
            {
                sum=sum+1;
            }
            if(ch[j]=='b'||ch[j]=='e'||ch[j]=='h'||ch[j]=='k'||ch[j]=='n'||ch[j]=='q'||ch[j]=='u'||ch[j]=='x')
            {
                sum=sum+2;
            }
            if(ch[j]=='c'||ch[j]=='f'||ch[j]=='i'||ch[j]=='l'||ch[j]=='o'||ch[j]=='r'||ch[j]=='v'||ch[j]=='y')
            {
                sum=sum+3;
            }
            if(ch[j]=='s'||ch[j]=='z')
            {
                sum=sum+4;
            }
        }
        printf("Case #%d: %d\n",i,sum);
    }
    return 0;
}

#include<stdio.h>
int main()
{
     char s[100000];
     int a[125];
     while (gets(s))
     {
          memset(a,0,sizeof(a));
          int l=strlen(s);
          for (int i=0;i<l;i++)
          {
               if ((s[i]>64 && s[i]<91) || (s[i]>96 &&s[i]<123))
                a[s[i]]++;
          }
          int max=0;
          for (int i=65;i<123;i++)
             if (max<a[i]) max=a[i];
          for (int i=65;i<123;i++)
             if (a[i]==max) printf("%c",i);
          printf(" %d\n",max);
     }
     return 0;
}

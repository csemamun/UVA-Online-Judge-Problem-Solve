#include<stdio.h>
int main()
{
    int tc,c=1;
    scanf("%d",&tc);
    while (tc--)
    {
        int r,len,wide;
        scanf("%d",&r);
        len=r*5;
        wide=len*60/100;
        int x1=len*45/100;
        int x2=len*55/100;
        int y=wide/2;
        printf("Case %d:\n-%d %d\n%d %d\n%d -%d\n-%d -%d\n",c++,x1,y,x2,y,x2,y,x1,y);
    }
    return 0;
}

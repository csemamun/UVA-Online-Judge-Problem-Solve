#include<stdio.h>

int main()
{
    int test,i,a,b,c;
    scanf("%d",&test);
    for(i=1; i<=test; i++)
    {
        scanf("%d %d %d",&a,&b,&c);

        if(b>a && a>c || b<a && a<c){



            printf("Case %d: %d\n",i, a);

        }

        else if(a>b && b>c || a<b && b<c){


             printf("Case %d: %d\n",i, b);

        }

        else if(a>c && c>b || a<c && c<b){


             printf("Case %d: %d\n",i, c);

        }
    }

    return 0;
}

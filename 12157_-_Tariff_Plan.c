#include <stdio.h>
int main()
{
    int t, cs ;
    scanf("%d",&t);
    for(cs = 1 ; cs <= t ; cs ++ )
    {
        int  n, mile=0, juice=0;
        scanf("%d",&n);
        while(n-- )
        {
                int x ; scanf("%d",&x);
                mile  = mile + ( ( x / 30 ) + 1 ) * 10 ;
                juice = juice + ( ( x / 60 ) + 1 ) * 15 ;
        }
        printf("Case %d: ",cs);

        if(mile < juice)
            printf("Mile %d\n",mile);

        else if(mile > juice)
            printf("Juice %d\n",juice);

        else
            printf("Mile Juice %d\n",mile);
    }
    return 0;
}

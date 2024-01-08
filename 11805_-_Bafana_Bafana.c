#include<stdio.h>
int main()
{
    int t, test = 0, N, K, P;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d %d %d", &N, &K, &P);
        int give_ball = (K+P-1)%N+1;
        printf("Case %d: %d\n", ++test, give_ball);
    }
    return 0;
}

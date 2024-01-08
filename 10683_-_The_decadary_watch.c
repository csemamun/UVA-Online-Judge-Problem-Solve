#include<stdio.h>
int main()
{
    int h, m, s, c;
    while(scanf("%2d %2d %2d %2d", &h, &m, &s, &c) == 4)
    {
        long long sum;
        sum = c*10+s*1000+m*60000+h*3600000;
        h = sum/8640000;
        sum %= 8640000;
        m = sum/86400;
        sum %= 86400;
        s = sum/864;
        sum %= 864;
        c = sum*100/864;
        printf("%d%02d%02d%02d\n", h, m, s, c);
    }
    return 0;
}
/*In the normal system a day consists of 24 hrs.24hrs = 24 * 60 * 60 * 100 = 8640000 hs
in the decimal system a day consists of 10 dhrs.10 dhrs = 10 * 100 * 100 * 100 = 10000000 ds*/

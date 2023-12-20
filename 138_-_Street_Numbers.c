#include<stdio.h>
#include<math.h>
int main()
{
    int i = 0, m, n, tri;

    for(n = 2; i < 10; n++)
    {
        tri = (n * (n + 1)) >> 1;
        m = sqrt(tri);
        if(m * m == tri)
        {
            printf("%10d %10d\n", m, n);
            i++;
        }
    }
    return 0;
}

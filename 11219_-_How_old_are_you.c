#include<stdio.h>
int main()
{
    int tc, i;
    int bd, bm, by, cd, cm, cy, age;
    while(scanf("%d", &tc)==1)
    {
        for(i=1; i<=tc; i++)
        {
            scanf("%d/%d/%d", &cd, &cm, &cy);
            scanf("%d/%d/%d", &bd, &bm, &by);

            age = cy - by;
            if(bm>cm || (bm==cm && bd>cd))
            age--;

            printf("Case #%d: ", i);
            if(age<0)
                printf("Invalid birth date\n");
            else if(age>130)
                printf("Check birth date\n");
            else
                printf("%d\n", age);
        }
    }
    return 0;
}

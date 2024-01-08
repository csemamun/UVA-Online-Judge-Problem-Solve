#include<stdio.h>
int main()
{
    int a[105];
    int test, i, n, count, count2, temp;
    printf("Lumberjacks:\n");
    scanf("%d", &test);
    while(test--)
    {
        count=1;
        count2=0;
        temp=0;
        for(i=0; i<10; i++)
        {
            scanf("%d", &n);
            if(temp>n)
            {
                count++;
                temp=n;
            }
            else if(temp<n)
            {
                count2++;
                temp=n;
            }
        }
        if(count==10 || count2==10)
        {
            printf("Ordered\n");
        }
        else
        {
           printf("Unordered\n");
        }
    }
}

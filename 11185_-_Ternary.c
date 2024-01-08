 #include<stdio.h>
int main()
{
    long int i,n,rem[100],j,an = 0;
    while(scanf("%ld", &n) && !(n<0))
    {
        if(n == 0)
            printf("0");
        i = 0;
        while(n != 0)
        {
            rem[i] = n%3;
            n = n/3;
            i++;
        }
        for(j=i-1; j>=0; j--)
        {
            printf("%d",rem[j]);
        }
        printf("\n");
    }
    return 0;
}

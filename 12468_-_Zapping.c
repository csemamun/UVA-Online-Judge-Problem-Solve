#include<stdio.h>
int main()
{
	int a, b;
	while(scanf("%d %d", &a, &b) != EOF)
    {
		if(a==-1 && b== -1)
		{
			break;
		}
		int r1=0, r2=0;
		if(a>b)
		{
			r1 = a - b;
			r2 = 100- a +b;
		}
		else
		{
			r1 = b-a;
			r2 = 100-b+a;
		}
		if(r1<r2)
		{
			printf("%d\n", r1);
		}
		else
		{
			printf("%d\n", r2);
		}
	}
	return 0;
}

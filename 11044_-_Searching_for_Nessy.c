#include<stdio.h>
int main()
{
	int tc, w,h, x;

	scanf("%d",&tc);
	while(tc--)
    {
		scanf("%d %d",&w,&h);
        x = (w/3)*(h/3);
		printf("%d\n",x);
	}

	return 0;
}

#include<stdio.h>
int main()
{
	int s[5842] = {1}, t2 = 0, t3 = 0, t5 = 0, t7 = 0, tmp, i, n;
	for(i = 1; i < 5842; i++)
	{
		while(s[t2]*2 <= s[i-1])
            t2++;
		while(s[t3]*3 <= s[i-1])
            t3++;
		while(s[t5]*5 <= s[i-1])
            t5++;
		while(s[t7]*7 <= s[i-1])
            t7++;
		tmp = s[t2]*2;
		if(s[t3]*3 < tmp)
            tmp = s[t3]*3;
		if(s[t5]*5 < tmp)
            tmp = s[t5]*5;
		if(s[t7]*7 < tmp)
            tmp = s[t7]*7;
		s[i] = tmp;
	}
	while(scanf("%d", &n) == 1 && n)
	{
		printf("The %d", n);
		if(n%10 == 1 && n%100 != 11)
			printf("st");
		else if(n%10 == 2 && n%100 != 12)
			printf("nd");
		else if(n%10 == 3 && n%100 != 13)
			printf("rd");
		else
			printf("th");
		printf(" humble number is %d.\n", s[n-1]);
	}
	return 0;
}

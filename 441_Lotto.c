#include<stdio.h>
int main()
{
	int k, S[12], count = 0, i,a,b,c,d,e,f;
	while (scanf("%d", &k), k)
    {
        if (count++)
			printf("\n");
		for (i = 0; i < k; i++)
			scanf("%d", &S[i]);

		for(a = 0; a < k - 5; a++)
			for(b = a + 1; b < k - 4; b++)
				for(c = b + 1; c < k - 3; c++)
					for(d = c + 1; d < k - 2; d++)
						for(e = d + 1; e < k - 1; e++)
							for(f = e + 1; f < k; f++)
								printf("%d %d %d %d %d %d\n", S[a], S[b], S[c],
										S[d], S[e], S[f]);
	}
	return 0;
}

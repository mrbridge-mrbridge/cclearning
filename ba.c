#include <stdio.h>

void main()
{
	int a[10];
	int i, j;
	int big;

	printf("enter elements of a\n");

	for(i = 0; i < 10; i++)
		scanf("%d", &a[i]);

	i = 0;
	big = a[0];
	while(i < 10)
	{
		for(j = 0; j < 10; j++)
		{
			if(a[i] > a[j] && a[i] > big)
				big = a[i];
			else
				continue;
		}
		i++;
	}
	printf("biggest is %d", big);
}

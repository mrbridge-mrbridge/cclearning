#include <stdio.h>

void main()
{
	int ar[5];
	int i;
	int sum = 0;
	int avg;

	printf("enter 5 values");
	for(i = 0; i < 5; i++)
	{
		scanf("%d", &ar[i]);
	}
	for(i = 0; i < 5; i++)
	{
		printf("%d\n", ar[i]);
	}
	for(i = 0; i < 5; i++)
        {
               sum = sum + ar[i];
        }
	printf("sum of arrays = %d", sum);
	printf("avergae of arrays = %d", (sum/5));
}

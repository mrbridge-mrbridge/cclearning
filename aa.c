#include <stdio.h>

int main(void)
{
	int num[5];
	int i;

	for(i = 0; i < 5; i++)
	{
		printf("enter element");
		scanf("%d", &num[i]);
	}
	for(i = 4; i >= 0; i--)
	{
		printf("%d\n", num[i]);
	}
}

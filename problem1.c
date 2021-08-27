#include <stdio.h>

/**
 *
 * print numbers
 * from 1 to n
 */

int main()
{
	int a = 1;
	int n;

	printf("Enter the value of n\n");
	scanf("%d", &n);

	while(a <= n)
	{
		printf("%d\n", a);
		a++;
	}
	return 0;
}

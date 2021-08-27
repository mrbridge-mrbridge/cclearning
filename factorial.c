#include <stdio.h>
/**
 * factorial of n
 */

int main()
{
	long number, n, factorial = 1;

	printf("Enter the value of n");
	scanf("%ld", &n);
	for(number = 1; number <= n; number++)
	{
		factorial = factorial * number;
	}
	printf("factorial of %ld is %ld\n", n, factorial);
	return 0;
}


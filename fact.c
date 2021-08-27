#include <stdio.h>

/**
 * print the factorial of a given integer
 */

int main()
{
	int i, x, n;
	printf("Enter the value of n to find factorial of n\n");
        scanf("%d", &n);
	
	
	x = 1;
	for(i = 1; i <= n; i++)
	{
		x = x * i;
	
	}
	printf("factorial of %d is %d", n, x);

        return 0;
}

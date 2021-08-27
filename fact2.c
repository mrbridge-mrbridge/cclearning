#include <stdio.h>

/**
 * print the factorial of a given integer
 */

int fact(int n)
{
	int i, x;
	
	x = 1;
	for(i = 1; i <= n; i++)
	{
		x = x * i;
	
	
	}
	return x;

}
int main()
{
	int n, y;
	printf("Enter the value of n to find factorial of n\n");
        scanf("%d", &n);

	y = fact(n);

	printf("factorial of %d is %d", n, y);

	return 0;
}



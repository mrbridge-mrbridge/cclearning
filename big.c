#include <stdio.h>

/**
 * print the biggest of two numbers
 */

int main()
{
	int a, b;

	printf("Enter a\n");
	scanf("%d", &a);

	printf("Enter b\n");
	scanf("%d", &b);

	if (a > b)
		printf("a in biggest");
	else
		printf("b is biggest");

	return 0;
}

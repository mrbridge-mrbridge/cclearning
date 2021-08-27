#include <stdio.h>

/**
 * print the biggest of three numbers
 */

int main()
{
	int a, b, c;

	printf("Enter a\n");
	scanf("%d", &a);

	printf("Enter b\n");
	scanf("%d", &b);
	
	printf("Enter c\n");
        scanf("%d", &c);

	if ((a > b) && (a > c))
		printf("a in biggest\n");
	if ((b > a) && (b > c))
		printf("b is biggest\n");
	else
		printf("c is biggest\n");
	return 0;
}

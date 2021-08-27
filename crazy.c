#include <stdio.h>
#include <stdlib.h>

/**
 * Trying something crazy with
 * craziness
 *
 * Return: nothing
 */

void m(int a, int b, int c)
{
	
	int sum;

	sum = a + b + c;
	printf("%d + %d + %d = %d\n", a, b, c, sum);

}

/**
 * the wow part
 *
 * Return: 0
 */

int main(void)
{
	int a, b, c;
	printf("Enter three digits, seperated by a comma: \n");
	scanf("%d,%d,%d", a, b, c);

	printf("Entered three digits are %d, %d, and %d\n", a, b, c);

	m(a, b, c);
	return (0);
}

#include <stdio.h>

/**
 * increment function
 */

int main()
{
	int a = 10;
	int b, c;
	b = a++;
	c = ++a;
	printf("the value of a is %d\n and the value of b is %d\n", a, b);
	
	return 0;
}

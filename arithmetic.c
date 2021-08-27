#include <stdio.h>
/**
 * Module for arithmetics
 */

int main()
{
	int a, b, c, d, e, f, g, h;
	printf("What is the value of a?\n");
	scanf("%d", &a);
	printf("What is the value of b?\n");
	scanf("%d", &b);
	printf("What is the value of c?\n");
	scanf("%d", &c);
	d = a + b;
	e = a - b;
	f = c * c;
	g = a / b;
	h = c % a;

	printf("addition results was %d\a\n", d);
	printf("subtraction results was %d\a\n", e);
	printf("multiplication results was %d\a\n", f);
	printf("division results was %d\a\n", g);
	printf("modulo results was %d\a\n", h);

	return 0;
}

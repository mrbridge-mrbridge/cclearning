#include <stdio.h>

int main()
{
	int q;

	for (q = 0x0; q <= 0xf; q++)
		putchar(q);
	putchar('\n');
	return (0);
}

#include <stdio.h>

int main()
{
	int a, b;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = '0'; b <= '9'; b++)
		{
			putchar(a);
			putchar(b);
			putchar(' ');
		}
	}
	return 0;
}

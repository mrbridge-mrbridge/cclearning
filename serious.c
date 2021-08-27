#include <stdio.h>

int main()
{
	int a, b, c;
	
	for (a = '0'; a <= '8'; a++)
	{
		for (b = '1'; b <= '9'; b++)
		{
			if (a !=b && a < b)
			{
				putchar(a);
				putchar(b);
				if (a < '8')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

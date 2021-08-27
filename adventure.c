#include <stdio.h>

int main()
{
	char start = '.';
	char *hero = &start;
	while (1)
	{
		putchar(*hero);
		fflush(stdout);
		hero++;
	}
}

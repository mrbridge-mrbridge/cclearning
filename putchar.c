#include <stdio.h>

/**
 * @Main - Putchar: lowercase alphabets
 *
 * @return - 0
 */

int main()
{
	char alph;
	alph = 'a';

	for(alph = 'a'; alph <= 'z'; alph++)
	{
		putchar(alph);
	}
	putchar('\n');
	return 0;
}

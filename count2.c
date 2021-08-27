#include <stdio.h>
/**
 * count newlines, spaces, and tabs
 */

main()
{

	int c, nl, sp, tb ;

	nl = 0;
	sp = 0;
	tb = 0;
	while((c = getchar()) != '*')
	{
		if(c == '\n')
			nl++;
		else if(c == ' ')
			sp++;
		else if(c == '\t')
			tb++;
	}
	printf("There are %d newlines, %d spaces, and %d tabs in the given text\n", nl, sp, tb);
}

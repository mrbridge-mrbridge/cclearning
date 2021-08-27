#include <stdio.h>

/**
 * Program to copy input to output
 * replace tabs, backspcae, and backlash
 */
main()
{
	char c;

	c=getchar();
	while(c != EOF){
		if(c == '\t'){
			putchar('\\');
			putchar('\t');
		}
		if(c == '\b'){
			putchar('\\');
			putchar('\b');
		}
		if(c == '\\'){
			putchar('\\');
			putchar('\\');
		}
		if(c != '\t' && c != '\b' && c != '\\'){
			putchar(c);
		}
	}
	return 0;

}

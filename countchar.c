#include <stdio.h>
/**program to count charaters
 */

main()
{
	double nc;

	nc = 0;
	while(getchar() != EOF)
	{
		++nc;
	}
	printf("%.0f\n", nc);
}

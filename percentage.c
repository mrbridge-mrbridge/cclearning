#include <stdio.h>
/**
 * percentage of marks
 */

int main()
{
	int m, t, perc, x;
	printf("What was the marks obtained?\n");
	scanf("%d", &m);
	printf("what was the total marks obtained?\n");
	scanf("%d", &t);
	x = 100;
	perc = m * x / t;
	printf("Final weighted score is %d", perc);

	return 0;

}

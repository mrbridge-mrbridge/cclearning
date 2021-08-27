#include <stdio.h>

/**
 * week days
 */

int main()
{
	int weekday;

	printf("Enter weekday 0 - sunday, 1 - monday ..\n");
	scanf("%d", &weekday);

	if (weekday == 1)
		printf("Monday! Let's go hard\n");
	if (weekday == 0 || weekday == 6)
		printf("Enjoy your weekend");
	if (weekday == 5)
		printf("Gustavo, today is friday. LEt's meet for beer");
	else
		printf("Such a boring day it is");
	return 0;
}

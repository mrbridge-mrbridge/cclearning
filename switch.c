#include <stdio.h>

/**
 * switch days of the week
 */

int main()
{
	int weekday;
	printf("Enter a weekday number. 0 - sunday, 1 - monday..\n");
	scanf("%d", &weekday);

	switch(weekday)
	{
		case 0:
			printf("it's sunday\n");
			break;
		case 1:
			printf("It's monday\n");
			break;
		default:
			printf("invalid");
	}

	return 0;
}

#include <stdio.h>
//#include <string.h>

void main()
{
	char name[20];
	int i = 0;
	int count=0;

	printf("enter your name:\n");
	gets(name);
	//count = strlen(name);
	
	while(name[i] != '\0')
	{
		count++;
		i++;
	}
	printf("the count of string is %d\n", count);
}

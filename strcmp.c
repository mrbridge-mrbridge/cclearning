#include <stdio.h>
#include <string.h>


void main()
{
	char p1[20];
	char p2[15];
	int cmp;

	printf("enter password");
	gets(p1);

	printf("confirm password");
	gets(p2);

	cmp = strcmp(p1, p2);

	if(cmp == 0)
		printf("success");
	else
		printf("invalid");
}

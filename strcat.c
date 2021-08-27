#include <stdio.h>
#include <string.h>

void main()
{
	char a[20];
	char b[20];
	char c[] = {' '};	
	
	printf("enter surname:\n");
	gets(a);

	printf("enter first name:\n");
	gets(b);

	strcat(b, c);
	strcat(b, a);
	printf("Hello %s", b);
	printf("\n");
}

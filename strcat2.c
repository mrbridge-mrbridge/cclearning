#include <stdio.h>
#include <string.h>

void main()
{
	char a[10];
	char b[10];
	int ln1, ln2, i;


	printf("first name");
	gets(a);
	printf("last name");
	gets(b);

	ln1 = strlen(a);
	ln2 = strlen(b);

	for(i = 0; i <= ln2; i++)
	{
		a[ln1+i] = b[i];
	}
	printf("How are you doing %s", a);
}

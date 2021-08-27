#include <stdio.h>
#include <string.h>

void main()
{
	char a[20];
	int i;

	printf("enter name\n");
	gets(a);

	printf("%s\n", a);

	for(i = 0; a[i] != '\0'; i++)
	{
		if(a[i] >= 'a' && a[i] <= 'z')
			a[i] = a[i] - ('a' - 'A');
		
	}
	printf("%s\n", a);
}

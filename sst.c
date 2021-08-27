#include <stdio.h>
#include <string.h>

void main()
{
	char a[20];
	char b[20];
	int ln, le, i;
	int count=0;
        int count2=0;

	printf("enter password\n");
	gets(a);

	printf("confirm password\n");
	gets(b);

	ln = strlen(a);
	le = strlen(b);

	for(i = 0; i <= ln; i++)
	{
		if(a[i] == b[i])
			count++;	
	}
	if(count == (ln + 1))
		printf("success\n");
	else
		printf("invalid\n");
	
	printf("%d\n", ln);
	printf("%d\n", le);
}

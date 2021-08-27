#include <stdio.h>

int main()
{
	int a = 10;
	int *p = &a;

	printf("%d\n", *p);

	p = p + 2;

	printf("%d\n", *p);

	p = p + 2;

	printf("%d\n", *p);

	p = p + 2;

	printf("%d\n", *p);

	p = p + 2;

        printf("%d\n", *p);
	
	*p = 2;

	printf("%d\n", *p);	
	return 0;
}

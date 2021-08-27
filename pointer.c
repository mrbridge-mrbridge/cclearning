#include <stdio.h>

void main()
{
	int a[5] = {1, 4, 2, -8, 0};
	int *p = &a[0];
	printf("value is: %d\n", *p);
	printf("address of element is %u\n", p);
	p = p + 2;
	printf("value is: %d\n", *p);
	printf("address of element is %u\n", p);
	
}

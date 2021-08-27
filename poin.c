#include <stdio.h>

int main()
{
	int a = 10;
	int *p = &a;
	int **q = &p;

	printf("a = %d, %d, %d\n", a, *p, **q);



	return 0;
}

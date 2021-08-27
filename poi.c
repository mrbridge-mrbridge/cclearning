#include <stdio.h>

void change(int *a)
{
	*a = *a + 5;
}

int main()
{
	int b = 5;
	change(&b);
	printf("value of b is %d\n", b);
	
	return (0);
}

#include <stdio.h>
/**
 * scanf
 * adding two numbes
 * a and b equals c
 */

int main()
{
	int a, b, c;
	

	printf("Enter digit for value a\n");
	scanf("%d",&a);
	printf("Enter digit for value b\n");
	scanf("%d",&b);
	c = a + b;
	printf("The value of c is %d\n", c);

	return 0;
}

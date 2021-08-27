#include <stdio.h>

int fact(int n)
{
	if (n > 1)
	{
		return n * fact(n - 1);
	}
	else
		return 1;
}

int main()
{
	int n;

	printf("Enter n\n");
	scanf("%d", &n);
	
	printf("factorial of %d is %d\n", n, fact(n));
	return 0;
}

#include <stdio.h>

int main()
{
	int n, sum = 0;
	int x = &n;

	printf("ente 4 digit number whose digits you want to add\n");
	scanf("%d", &n);

	do 
	{sum = sum + (n % 10);
	} while (n = n / 10);

	printf("Sum of the digits of %d is %d\n", x, sum);
	return 0;
}

#include <stdio.h>


int main()
{
	int x, i, c;

	printf("enter number\n");
	scanf("%d", &x);

	for(i = 2; i <= x; i++)
	{
			
		if(x % i == 0)
		{
			break;
		}
		printf("number is not prime");
	}
	if(x == i)
	{
		printf("%d is a prime number\n", x);
	}
}


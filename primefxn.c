#include <stdio.h>


int prime(int x)
{
	int i, c;
	int count = 0;

	for(i = 1; i <= x; i++)
	{
		c = x % i;
		if(c == 0)
		{
			count++;
		}
	
	}
	if(count == 2)
		return 1;
	else
		return 0;
}



int main()
{
	int n, z;

	printf("enter the value of n\n");
	scanf("%d", &n);

	z = prime(n);
	
	if(z == 1)
		printf("%d is a prime number\n", n);
	else
		printf("%d is not a prime number\n", n);	
		
	return 0;
}

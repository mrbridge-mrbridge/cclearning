#include <stdio.h>


int prime(int x)
{
	int i;
	int count = 0;

	
	for(i = 1; i <= x; i++)
	{
		if(x % i == 0)
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
	int n, o, z;

	printf("enter the value of o\n");
	scanf("%d", &o);

	for(n = 2; n <= o; n++)
	{
		z = prime(n);
	
		if(z == 1)
			printf("%d is prime\n", n);
					
	} 
	return 0;
		
}

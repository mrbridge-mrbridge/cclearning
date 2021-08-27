#include <stdio.h>

int main()
{
	int n = 982;
	int sum = 0;

	do
	{
		do
		{sum = sum + (n % 10);
		}while(n = (n/10));
	} while(sum>10);
		n = sum;
	
	printf("%d\n", sum);
	return 0;
}

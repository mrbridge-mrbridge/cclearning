#include <stdio.h>

int main()
{
	int n, x, z;
	printf("Enter value\n");
	scanf("%d", &z);

	n = 1;
	while(n <= z){

	for(x = 1; x <= n; x++)
	{
		printf("%d", n);
	}
	printf("\n");
	n++;
	}
	return 0;
}

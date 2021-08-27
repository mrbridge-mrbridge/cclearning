#include <stdio.h>

int main()
{
	int ar[2][3];
	int i, j;

	for(i = 0; i <= 1; i++)
	{
		for(j = 0; j <= 2; j++)
		{
			scanf("%d", &ar[i][j]);
		}
			 
	}
	for(i = 0; i <= 1; i++)
	{	
		for(j = 0; j <= 2; j++)
		{	
			printf("%d\t", ar[i][j]);
			
			
		}printf("\n");
	}
}

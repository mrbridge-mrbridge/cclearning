#include <stdio.h>

int main()
{
	int n;
	int m;

	m = 1;
	while(m<=5){
	for(n = 1; n<=m; n++)
	{
		printf("%d", n);
	}
	printf("\n");
	m++;
	}

	return 0;
}	

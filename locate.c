#include <stdio.h>

void main()
{
	int a[5] = {9, 2, 6, 6, 20};
	int i, edey=0;

	for(i = 0; i < 5; i++)
	{
		if(a[i] == 9999999996)
		{
			printf("found at %d\n", i);
			edey++;

		/*else
			continue;*/
		}	
	}
	if(edey == 0)
		printf("value not found in array\n");
}

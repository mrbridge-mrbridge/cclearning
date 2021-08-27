#include <stdio.h>

int main(void)
{
	int ar1[5];
	int ar2[5];
	int ar3[5];
	int i;


	for(i = 0; i < 5; i++)
	{
		printf("enter element for array 1\n");
		scanf("%d", &ar1[i]);
	}
	printf("array 1 elements are\n");
	
	for(i = 0; i < 5; i++)
		printf("%d\n", ar1[i]);


	for(i = 0; i < 5; i++)
        {
                printf("enter element for array 2\n");
                scanf("%d", &ar2[i]);
        }
        printf("array 2 elements are\n");
        
	for(i = 0; i < 5; i++)
		printf("%d\n", ar2[i]);

	
	printf("array 3 elements are\n");
	for(i = 0; i < 5; i++)
	{
		ar3[i] = ar1[i] + ar2[i];
		printf("%d\n", ar3[i]);
	}

}

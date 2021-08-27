#include <stdio.h>

int main()
{
	int a[3][3];
	int b[3][3];
	int c[3][3];
	int i, j;
	
	printf("first array elements...\n");
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	printf("second array elements...\n");
	for(i = 0; i < 3; i++)
        {
                for(j = 0; j < 3; j++)
                {
                        scanf("%d", &b[i][j]);
                }
        }
	printf("third array elements...\n");
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			c[i][j] = a[i][j] + b[i][j];
		}
	}
	printf("now array a..\n");

	for(i = 0; i < 3; i++)
        {
                for(j = 0; j < 3; j++)
                {
                       printf("%d\t", a[i][j]);
                }
		printf("\n");
        }

	printf("now array b..\n");

        for(i = 0; i < 3; i++)
        {
                for(j = 0; j < 3; j++)
                {
                       printf("%d\t", b[i][j]);
                }
                printf("\n");
        }

	printf("now array c..\n");

        for(i = 0; i < 3; i++)
        {
                for(j = 0; j < 3; j++)
                {
                       printf("%d\t", c[i][j]);
                }
                printf("\n");
        }
	
	


}

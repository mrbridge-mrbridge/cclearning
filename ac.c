#include <stdio.h>

void main()
{
        int ar[10];
        int i;
        float z;
        int count1 = 0;
        int count2 = 0;

        

	for(i = 0; i < 10; i++)
        {
                printf("enter the next number\n");

                scanf("%d", &ar[i]);

                if( ar[i] % 2 == 0)
                        count1++;
                else
                        count2++;

        }
        printf("The array elements are\n");

        for(i = 0; i < 10; i++)
        {
                printf("%d\n", ar[i]);
        }
        printf("the count of even numbers is %d\n", count1);
        printf("the count of odd numbers is %d\n", count2);


}

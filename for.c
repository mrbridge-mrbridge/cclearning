#include <stdio.h>

int main()
{
	int boy; 
	float girl;

	for(boy = 5; boy <= 20; boy++)
	{
		girl = boy * 0.5;
		printf("%d\t %f\n", boy, girl);
	}
	return 0;
}

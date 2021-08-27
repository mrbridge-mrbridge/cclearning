#include <stdio.h>

int main()
{
	int boy; 
	float girl;
	boy = 5;

	while(boy <= 20)
	{
		boy++;	
		girl = boy * 0.5;
		printf("%d\t %f\n", boy, girl);
	}
	return 0;
}

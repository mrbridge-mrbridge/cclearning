#include <stdio.h>


int f(int x, int y)
{
	if(x > y)
		return x;
	else
		return y;
}

int main()
{
	int z;
	z = f(10, 20);

	printf("z is equal to %d", z);
	return 0;
}

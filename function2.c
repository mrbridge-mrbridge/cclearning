#include <stdio.h>

int small(int x, int y)
{
	if(x < y)
		return x;
	else
		return y;
}

int main()
{
	int m, n, o, a, b, c;

	printf("enter 3 numbers\n");
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	
	m = small(a, b);
	n = small(c, m);
	o = small(c, small(a, b));

	printf("n is %d\n", n);
	printf("o is %d\n", o);

	return 0;

}

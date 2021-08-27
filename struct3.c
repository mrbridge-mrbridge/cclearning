#include <stdio.h>
#include <math.h>

typedef struct point {
	int x;
	int y;
} line;

//void king(struct point * zip)

void king(line * zip)
{
	printf("enter value of x\n");
	scanf("%d", &zip->x);

	printf("enter value of y\n");
	scanf("%d", &zip->y);
}

void print(line a)
{
	printf("|%d, %d|\n", zip->x, zip->y);	
}
int main()
{
	float difx, dify, distance;
	struct point m, n;

	king(&m);
	king(&n);

	print(m);
	print(n);

	difx = m.x - n.x;
	dify = m.y - n.y;

	distance = sqrt(difx*difx + dify*dify);

	printf("distance = %f\n", distance);
}

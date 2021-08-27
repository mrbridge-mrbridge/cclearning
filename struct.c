#include <stdio.h>
#include <math.h>

struct point
{
	int x, y;
};

void print(struct point t)
{
	printf("%d, %d\n", t.x, t.y);
}

void main()
{
	double distance, difx, dify;
	struct point * p;
	struct point * q;

	printf("enter x and y values for point p\n");
	scanf("%d", &p->x);
	
	scanf("%d", &p->y);

	printf("enter x and y values for point q\n");
	scanf("%d", &q->x);
        scanf("%d", &q->y);

	difx = p.x - q.x;
	dify = p.y - q.y;

	distance = sqrt(difx*difx + dify*dify);

	print(p);
	print(q);
	printf("distance between point p and q is %lf\n", distance);
}

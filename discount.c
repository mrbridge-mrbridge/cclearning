#include <stdio.h>

/**
 * calculate net price
 * after discount
 * with quantity and rate per price given
 */

int main()
{
	double q, r, a, d;

	printf("What was the quantity\n");
	scanf("%lf", &q);

	printf("What was the rate per unit\n");
	scanf("%lf", &r);

	a = r * q;
	d = a * 0.9;

	if (a >= 500)
		printf("Actual price is %lf. You got a 10 percent discount. Net price is %lf. Come back again our happy customer\n", a, d);
	else
		printf("Purchase was below 500 so you got zero discount. Net price is %lf\n", a);
	return 0;
}

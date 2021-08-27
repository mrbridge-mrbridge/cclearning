#include <stdio.h>
#include <string.h>

void main()
{
	char a[100] = {"kofi papa"};
	int ln, l, k;
	char m;
	
	ln = strlen(a);
	for(l=0; l<=(ln/2); l++)
	{
		k=ln-1-l;
		m=a[l];
		a[l] = a[k];
		a[k] = m;
	}
	
	printf("%s\n", a);


	
}

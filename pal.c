#include <stdio.h>
#include <string.h>

void main()
{
	char a[]={"abcc ba"};
	int count=0, i=0, ln;

	ln = strlen(a)-1;

	for(i=0; i<=(ln/2); i++)
	{
		if(a[i] != a[ln-i])
		{
			printf("not palindrome\n");
			break;
		
		}
		else
			count++;
	}
	if(count = ln/2)
		printf("it's palindrome");
}

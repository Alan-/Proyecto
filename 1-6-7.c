#include <stdio.h>
main()
{
	int c;
	while ((c = getchar()) != EOF)
	{	
		c = (getchar() != EOF);
		printf("%d", c);
	}
}


#include <stdio.h>
main()
{
	int c;
	while ((c = getchar()) != EOF)
	{
		if (c == '\n')
		{
			printf("\\n");
			c = '\0';
		}
		else if (c == '\t')
		{
			printf("\\t");
			c = '\0';
		}
		else if (c == '\\')
		{
			printf("\\");
			c = '\0';
		}
		putchar(c);
	}
}

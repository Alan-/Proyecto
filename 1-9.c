#include <stdio.h>
main()
{
	int c,bs;
	bs = 0;
	while ((c = getchar()) != EOF)
	{
		if (c == ' ')
		{
			if (bs >= 1)
				c = '\0';
			++bs;
		}
		else if (c != ' ')
			bs = 0;
		putchar(c);
	}
}

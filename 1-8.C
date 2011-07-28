#include <stdio.h>
main()
{
	int c, nl,tab,esp;
	nl = 0;
	tab = 0;
	esp = 0;	
	while ((c = getchar()) != EOF)
		if (c == '\n')
			++nl;
		else if (c == '\t')
			++tab;
		else if (c == ' ')
			++esp;
	printf("%d\n%d\n%d\n", nl, tab, esp);
}

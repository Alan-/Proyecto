#include <stdio.h>
/* count digits, white space, others */
main()
{
	int c, i, nwhite, nother, nmax, j, nmax2;
	int ndigit[10];
	nmax = nwhite = nother = 0;
	for (i = 0; i < 10; ++i)
		ndigit[i] = 0;
	while ((c = getchar()) != EOF)
	{	
		if (c >= '0' && c <= '9')
			++ndigit[c-'0'];
		else if (c == ' ' || c == '\n' || c == '\t')
			++nwhite;
		else
			++nother;
	}
	for (i = 0; i < 10; ++i)
		if (nmax < ndigit[i])
			nmax = ndigit[i];
	nmax2 = nmax;
	printf("digits = \n");
	for (i = 0; i < nmax2; ++i)
	{
		for (j = 0; j < 10; ++j)
		{
			if (ndigit[j] >= nmax)
				printf(" x");
			else
				printf("  ");
		}
		--nmax;
		printf("\n");
	}
	for (i = 0; i < 10; ++i)
		printf(" %d", ndigit[i]);	
	printf(", white space = %d, other = %d\n",nwhite, nother);
}

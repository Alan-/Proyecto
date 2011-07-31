#include <stdio.h>
/* count digits, white space, others */
void main()
{
	int c, i, nwhite, nother, nmax, j, nmax2;
	int ndigit[26];
	nmax = nwhite = nother = 0;
	for (i = 0; i < 26; ++i)
		ndigit[i] = 0;
	while ((c = getchar()) != EOF)
	{
		if (c >= 'a' && c <= 'z')
			++ndigit[c-'a'];
		else if (c == ' ' || c == '\n' || c == '\t')
			++nwhite;
		else
			++nother;
	}
	for (i = 0; i < 26; ++i)
		if (nmax < ndigit[i])
			nmax = ndigit[i];
	nmax2 = nmax;
	printf("letras = \n");
	for (i = 0; i < nmax2; ++i)
	{
		for (j = 0; j < 26; ++j)
		{
			if (ndigit[j] >= nmax)
				printf(" x");
			else
				printf("  ");
		}
		--nmax;
		printf("\n");
	}
	for (i = 0; i < 26; ++i)
		printf(" %d", ndigit[i]);
	printf(", white space = %d, other = %d",nwhite, nother);
	for (i = 'a'; i < 'z'+1; ++i)
		printf(" %c",i);
	printf(" \n");
}

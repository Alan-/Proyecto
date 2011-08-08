#include <stdio.h>
#define MAXLINE 1000

int getline(char line[], int maxline);
void entab(char input[], char output[]);

main()
{
	char line[MAXLINE];
	char out[MAXLINE];
	getline(line, MAXLINE);
	entab(line, out);
	printf("%s\n",out);
	return 0;
}
int getline(char s[],int lim)
{
	int c, i;
	for (i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
		s[i] = c;
	if (c == '\n')
	{
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}
void entab(char input[], char output[])
{
	int i,j,k,bs;
	i = k = bs = 0;
	while(input[k] != '\0')
	{
		while(input[k] == ' ')
		{
			bs++;
			if(bs == 7)
			{
				output[i] = '\t';
				i++;
				bs = 0;
			}
			k++;
		}
		while(bs > 0)
		{
			output[i] = ' ';
			bs--;
			i++;
		}
		output[i] = input[k];
		++i;
		bs = 0;
		k++;
	}
	output[i] = '\0';
}



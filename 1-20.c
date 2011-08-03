#include <stdio.h>
#define MAXLINE 1000

int getline(char line[], int maxline);
void detab(char input[], char output[]);

main()
{
	char line[MAXLINE];
	char out[MAXLINE];
	getline(line, MAXLINE);
	detab(line, out);
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
void detab(char input[], char output[])
{
	int i,j,k;
	i = k = 0;
	while(input[k] != '\0')
	{
		if(input[k] == '\t')
		{
			for(j = 0; j < 7; j++)
			{
				output[i] = ' ';
				i++;
			}
		}
		else
		{
			output[i] = input[k];
			++i;
		}
		k++;
	}
	output[i] = '\0';
}



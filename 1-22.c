#include <stdio.h>
#define MAXLINE 1000

int getline(char line[], int maxline);
void fold(char input[], char output[]);

main()
{
	char line[MAXLINE];
	char out[MAXLINE];
	getline(line, MAXLINE);
	fold(line, out);
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
void fold(char input[], char output[])
{
	int i,k,done,len;
	i = k = done = len = 0;

	while(input[k] != '\0')
	{
		if( (input[k] == ' ') && (i > 40) && (done == 0) )
		{
			output[i] = '\n';
			i++;
			k++;
			done = 1;
		}
		if( input[k] == ' ' )
			len = 0;
		if( (i > 40) && (len > 14) && (done == 0))
		{
			output[i] = '-';
			i++;
			output[i] = '\n';
			i++;
			done = 1;
		}
		output[i] = input[k];
		++i;
		k++;
		len++;
	}
	output[i] = '\0';
}



#include <stdio.h>
#define MAXLINE 1000
int getline(char line[], int maxline);
void copy(char to[], char from[]);
main()
{
	int len,j,i;
	int max;
	char line[MAXLINE];
	char longest[MAXLINE];
	char to[20][MAXLINE], from[MAXLINE];
	max = j = i = 0;
	while ((len = getline(line, MAXLINE)) > 0)
	{
		if (len > max)
		{
			max = len;
			copy(longest, line);
		}
		if (len > 80)
		{
			i = 0;
			while ((to[j][i] = line[i]) != '\0')
				++i;
			++j;
		}
	}
	printf("The longest line with %d characters was:\n", max);
	if (max > 0)
		printf("%s", longest);
	printf("Lines with more than 80 characters:\n");
	while (--j >= 0)
		printf("%s", to[j]);
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
void copy(char to[], char from[])
{
	int i;
	i = 0;
	while ((to[i] = from[i]) != '\0')
		++i;
}

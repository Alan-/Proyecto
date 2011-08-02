#include <stdio.h>
#define MAXLINE 1000
int getline(char line[], int maxline);
void copy(char to[], char from[]);
void reverse(int i,char re[], char fro[]);
main()
{
	int len;
//	int max;
	char line[MAXLINE];
	char longest[MAXLINE];
	char rev[MAXLINE];
//	max = 0;
	while ((len = getline(line, MAXLINE)) > 0)
		//if (len > max)
		{
		//	max = len;
		//	copy(longest, line);
			reverse(len, rev, line);
			printf("%s\n", rev);
		}
	//printf("The longest line with %d characters was:\n", max);
	//if (max > 0)
	//	printf("%s", longest);
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
void reverse(int i,char re[], char fro[])
{
	int j;
	re[i] = '\0';
	i = i - 1;
	j = 0;
	while (((re[j] = fro[i]) != fro[0]) || (i > 0))
	{
		--i;
		++j;
	}
}


#include<stdio.h>
#define MAXLINE (1000)
int getline(char line[], int maxline);
void copy(char to[], char from[]);
int main(void)
{
	int len,max,c;
	char line[MAXLINE],longest[MAXLINE];
	max=0;
	while((len = getline(line, MAXLINE)) > 0)
	{   if(line[len-1] != '\n')
	 {
	 	while((c=getchar())!=EOF && c!='\n')
	 	++len;
	 }
	    if(len > max)
	    {
	    	max = len;
	    	copy(longest, line);
		}
	}
		if(max > 0)
	  {
		printf("%d\n",max);
		printf("%s",longest);
	}
		return 0;
}
int getline(char s[], int lim)
{
	int c,i;
	for(i=0;i<lim-1 && (c=getchar())!=EOF && c!='\n';++i)
	s[i]=c;
	if(c=='\n')
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
		while((to[i] = from[i]) != '\0')
		++i;
	}

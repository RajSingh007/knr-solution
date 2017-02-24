#include<stdio.h>
int main()
{
	int c,nl=0,bl=0,tb=0;
	while(c=getchar()!=EOF)
	{
		if(c=='\n')
		++nl;
	   else	if(c==' ')
		++bl;
	   else	if(c=='\t')
		++tb;
	}
	printf("newlines=%d\nblanks=%d\ntabs=%d\n",nl,bl,tb);
	return 0;
}

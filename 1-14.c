#include<stdio.h>
#include<stdlib.h>
int main()
{
	int c,i,j;
	int chr[128];
	for(i=0;i<128;++i)
	chr[i]=0;
	while((c=getchar())!=EOF)
	++chr[c];
	for(i=0;i<128;++i)
	{
		putchar(i);
		for(j=0;j<chr[i];++j)
		putchar('*');
		putchar('\n');
	}
	return 0;
}

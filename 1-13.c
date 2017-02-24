#include <stdio.h>
int main()
{
	int c,d,i;
	while((c=getchar())!='\n')
	 { d=0;
	      while((c=getchar())!='\n') 
	    {
	      if(c!=' ')
	      d=d+1;
	      else
	      break;
	    }
	    d++;
	    printf("| ");
		for(i=0;i<d;i++)
		{
		printf("*");
	    }
	printf("\n");
	}
	return 0;
}

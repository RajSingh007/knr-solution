#include<stdio.h>
#include <stdlib.h>

void main()
{
int i=0,c;

printf("Eva:~$ ");

    while((c = getchar())!= '\n')
    {
        if((c ==' '||c=='\n'||c=='\t')) {
            printf("\n");
             while((c = getchar()) == ' ');
            putchar(c);
        }
        else {
         putchar(c);
	    }
    }

    printf("\n");
}

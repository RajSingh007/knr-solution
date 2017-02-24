#include<stdio.h>
void main()
{
 int c,d = 0;
 while((c = getchar())!=EOF)
{
  if((c == ' '|| c == '\n' || c =='\t'))
  d=d+1;
}
  printf("The no of words is=%d",d);
}

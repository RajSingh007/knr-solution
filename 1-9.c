#include<stdio.h>
int main()
{
	char a[100],s[100];
	int i=0,j=0;
	gets(s);
	while(s[i]!='\0')
	{
		if(!(s[i]==' '&&s[i+1]==' '))
		{
			a[j]=s[i];
			j++;
		}
		i++;
    }
    printf("The string is \n %s \n",a);
	return 0;
}

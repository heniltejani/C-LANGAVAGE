#include<stdio.h>
#include<string.h>
void main()
{
	char i,j,fn[10],ln[10],rv[10];
	printf("Enter first name  = ");
	scanf("%s",&fn);
	printf("Enter last name = ");
	scanf("%s",&ln);
	
	printf("\nstring without space = %s%s",fn,ln);
	printf("\nstring with space = %s %s",fn,ln);
	
	printf("\n\n size of first name  = %d",strlen(fn));
	printf("\n size of last name = %d",strlen(ln));
	
	printf("\nreverse string = ");
	for(i=strlen(fn);i>=0;i--)
	{
		printf("%c",fn[i]);
	}
}
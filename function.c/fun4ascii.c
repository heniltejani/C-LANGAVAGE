#include <stdio.h>
char ascii(char ch)
{
	int ascii;

	if(ch>='A'&&ch<='Z')
	{
		ascii=ch+32;
		//printf("charater is lwr value:%c\n",ascii);
	}
	if(ch>='a'&&ch<='z')
	{
		ascii=ch-32;
		//printf("charater is upr value:%c\n",ascii);
	}
	return ascii;	
}
int main()
{
	printf("\n\nhiii peple wel come\n\n");
	
	char ch;	

	printf("enter your charater\n");
	scanf("%c",&ch);
    printf("your charater ascii value:%c",ascii(ch));
	printf("\n\nbyyyyyy....\n\n");
}
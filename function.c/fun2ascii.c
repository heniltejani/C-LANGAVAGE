#include <stdio.h>
int ascii()
{
	char ch;
	int ascii;

	printf("enter your charater\n");
	scanf("%c",&ch);

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
    printf("your total salary:%c",ascii());
	printf("\n\nbyyyyyy....\n\n");
}
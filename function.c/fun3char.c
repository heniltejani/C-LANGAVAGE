#include <stdio.h>
int alphabet(char ch)
{
	
	if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
	{
		printf("this is an alphabet.\n");

	}else
	{
		if(ch>='0'&&ch<='9')
		{
			printf("this is a digit.\n");
		}
		else
		{
			printf("this is a special charater.\n");
		}	
	}
}
int main()
{
	printf("hii pepole\n");
	char n;
	printf("enter your character:\n");
	scanf("%c",&n);
	alphabet(n);
	printf("byyyyyyy...\n");
}
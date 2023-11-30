#include <stdio.h>
int main()
{
	char str[20];
	
	scanf("%[^\n]s",str);
	
	gets(str);
	
	printf("your string is:%s\n",str);
	puts(str);
	
	int i;
	for(i=0;str[i]!="0\";i++);
	printf("\n your string is:%d",i);
	
	retuen 0;
}
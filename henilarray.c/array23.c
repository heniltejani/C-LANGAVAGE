#include <stdio.h> 
int main()
{
	char arr[100];
	int i;
	
	for(i=0;i<=10;i++)
	{
		scanf("%c",&arr[i]);
	}
	for(i=0;i<=10;i++)
	{
		printf("%c",arr[i]);
	}
	return 0;
}
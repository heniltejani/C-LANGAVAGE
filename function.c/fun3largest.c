#include <stdio.h>
int largest(int a,int b,int c)
{

	if(a>b&&a>c)
	{
		printf("a is largest value:\n");
	}
	if(b>a&&b>c)
	{
		printf("b is largest value:\n");
	}
	if(c>a&&c>b)
	{
		printf("c is largest value:\n");
	}
}
int main()
{
	printf("hii pepole\n");
	int i,j,k;

	printf("enter A value:\n");
	scanf("%d",&i);

	printf("enter B value:\n");
	scanf("%d",&j);

	printf("enter C value:\n");
	scanf("%d",&k);
	
	largest(i,j,k);
	printf("byyyyyyy...\n");
}

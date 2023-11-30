#include <stdio.h>
int serise(int i,int j)
{
	
	for(j=1;j<=i;j++)
	{
		printf("%d ,",(j*j));
	}	
	return (j*j);
}
int main()
{
	printf("\n\nhiii peple wel come\n\n");
	int x,y;
	
	printf("enter your value:\n");
	scanf("%d",&x);
	serise(x,y);
	printf("\n\nbyyyyyy....\n\n");
}
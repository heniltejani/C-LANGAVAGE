#include<stdio.h>
void main()
{
	int i,j,num;
	printf("Enter num = ");
	scanf("%d",&num);
	i=1;
	do
	{
		j=0;
		do
		{
			printf(" ");
			j++;
		}while(j<=num-i);
		j=1;
		do
		{
			printf("*");
			j++;
		}while(j<=i);
		j=1;
		do
		{
			printf("*");
			j++;
		}while(j<=i-1);
		printf("\n");
		i++;
	}while(i<=num);
}
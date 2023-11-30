#include <stdio.h> 

int main()
{
		int num,i,j;
		printf("enter your value:\n");
		scanf("%d",&num);
		i=1;
		do{
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
		i=num-1;
		do
		{
			j=0;
			do
			{
				printf(" ");
                j++;
			}while(j<=(num-i));
			j=1;
			do
			{
				printf("*");
				j++;
			}while(j<=2*i-1);
		printf("\n");
		--i;
		}while(i>=1);
	return 0;
}
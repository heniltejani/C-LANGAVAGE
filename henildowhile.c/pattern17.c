#include <stdio.h>
int main()
{
		int num,i=1,j;
		
		printf("enter your value:\n");
		scanf("%d",&num);
		
		do{
			j=0;
			do{
				printf(" ");
				j++;
			}while(j<=(2*num-i));
			
			j=1;
			do{
				if(i%2==1)
				{
					printf("* ");
				}
				j++;
			}while(j<=i);
			
			printf("\n");
			i++;
			
		}while(i<=2*num);
		
		return 0;
}
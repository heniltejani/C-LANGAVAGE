#include <stdio.h>   
int main()
{
		int i=0,j,k=11;
		
		while(i<5)
		{
			j=1;
			while(j<=5)
			{
				printf("%d\t",k++);
				j++;
			}
				k=k+5;
				printf("\n");
				i++;
		}
		return 0; 
}
#include <stdio.h>
int main()
{
	char i,j,k=65,l;
	
	l=k+32;
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(i%2==0)
			{
				printf("%c\t",l++);
				k++;
			}
			else
			{
				printf("%c\t",k++);
			}
		}
				printf("\n");
	}
	return 0;
}
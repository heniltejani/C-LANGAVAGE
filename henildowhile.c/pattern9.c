#include <stdio.h>
int main()
{
	char i=1,j,k=65,l=65;
	
	l=k+32;
	
	do
	{
		j=1;
		do
		{
			if(i%2!=0)
			{
				printf("%c\t",l++);
				k++;
			}
			else
			{
				printf("%c\t",k++);
				l++;
			}
			j++;
		}
		while(j<=i);
				i++;
				printf("\n");
	}while(i<=5);
	return 0;
}
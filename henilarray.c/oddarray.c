#include <stdio.h>
int main()
{	
		int i[20],n;
		
	for(n=1;n<=10;n++)
	{
	
	printf("enter your value:\t");
	scanf("%d",&i[n]);
	
	}
	
	for(n=0;n<=10;n++)
	{
	
		if(i[n]%2==1)
		{
			   printf("%d\n",i[n]);
		}
	}
	return 0;
}
#include <stdio.h>
int main()
{
	int i,n,k=65;

		printf("enter your value:\n");
		scanf("%d",&n);
	
	for(i=1;i<=2*n;i++)                                                                                                                                                                                                                                                                           
	{
		if(k%2==1)
		{
		printf("%c , \t",k);
		}
		k++;
	}
	return 0;
}
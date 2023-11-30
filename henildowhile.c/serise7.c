#include <stdio.h>
int main()
{
	int i,n,k=65;
	
	printf("enter your value:\n");
	scanf("%d",&n);
	
	i=1;
	
	do{
		if(k%2==1)
		{
			printf("%c,\t",k);
			i++;
		}
		k++;
	}
	while(i<=n);
	return 0;
}
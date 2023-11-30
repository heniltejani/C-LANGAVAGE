#include <stdio.h>
int main()
{
	int n,a=0,b=1,c,i;
	
	printf("enter your value:\n");
	scanf("%d",&n);
	
	printf("%d,",b);
	
	for(i=1;i<n;i++)
	{
		c=a+b;
		printf("%d,",c);
		a=b;
		b=c;
	}
	return 0;
}
#include <stdio.h>
#include <math.h>
int main()
{
	int i,j,a,b,n;
	float c;
	
	printf("enter your number:\n");
	scanf("%d",&n);
	
	b=n;
	
	for(i=1;n>0;i++)
	{
			n=n/10;
	}
	n=b;
	for(j=1;j<i;j++)
	{
		a=b%10;
		c=c+pow(a,i-1);
		b=b/10;
	}
	if(c==n)
	{
		printf("%d is armstrong number\n",n);
	}
	else
	{
		printf("%d is not armstrong number\n",n);
	}
	return 0;
}
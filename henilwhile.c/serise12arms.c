#include <stdio.h>
#include <math.h>
int main()
{
	int i,j,a,b,n;
	float c;
	
	printf("enter your number:\n");
	scanf("%d",&n);
	
	b=n;
	i=1;
	j=1;
	
	while(n>0)
	{
			n=n/10;
			i++;
	}
	n=b;
	while(j<i)
	{
		a=b%10;
		c=c+pow(a,i-1);
		b=b/10;
		j++;
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
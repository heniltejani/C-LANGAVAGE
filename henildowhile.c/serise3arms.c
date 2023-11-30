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
	
	do
	{
			n=n/10;
			i++;
	}
	while(n>0);
	n=b;
	do{
		a=b%10;
		c=c+pow(a,i-1);
		b=b/10;
		j++;
	}
	while(j<i);
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
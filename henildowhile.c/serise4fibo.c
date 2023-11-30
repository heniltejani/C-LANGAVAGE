#include <stdio.h>
int main()
{
	int n,a=0,b=1,c,i;
	
	printf("enter your value:\n");
	scanf("%d",&n);
	
	printf("%d ,",b);
	i=1;
	
  do {
		c=a+b;
		printf("%d,",c);
		a=b;
		b=c;
		i++;
   }
   while(i<n);
   return 0;
}
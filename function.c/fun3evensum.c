#include <stdio.h>
int even(int n)
{
	int i,ans=0;

	for(i=1;i<=n;++i)
	{
	      	if(i%2==0)
	       	{
			printf("%d\t",i);
			ans = ans + i;
	       	}
	}
	printf("\nyour even number sum:%d\n",ans);
	printf("-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-");
}
int main()
{
	printf("\n\nhiii peple wel come\n\n");
	
	int a;
	
	printf("enter your number:\n");
	scanf("%d",&a);
    even(a);
	
	printf("\n\nbyyyyyy....\n\n");
}

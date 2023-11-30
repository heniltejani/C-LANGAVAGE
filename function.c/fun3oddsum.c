#include <stdio.h>
int odd(int n)
{
	int i,ans=0;

	for(i=1;i<=n;i++)
	{
	      if(i%2==1)
	        {
		ans = ans+i;
		printf("%d\t",i);
	       	}
	}
	printf("\nyou odd number sum:%d\n",ans);
	printf("-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-");
}
int main()
{
	printf("\n\nhiii peple wel come\n\n");
	
	int a;
	
	printf("enter your number:\n");
	scanf("%d",&a);
    odd(a);
	printf("\n\nbyyyyyy....\n\n");
}
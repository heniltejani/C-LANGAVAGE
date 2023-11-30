#include <stdio.h>
int main()
{
	int i,ans=0,n;
	

	printf("enter your value:\n");
	scanf("%d",&n);

	for(i=1;i<=n;++i)
	{
	      	if(i%2!=0)
	       	{
			printf("%d\t",++i);
			ans = ans + i;
	       	}
	}
	printf("%d\t",ans);
	return 0;
}


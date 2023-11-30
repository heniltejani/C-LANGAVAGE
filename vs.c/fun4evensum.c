#include <stdio.h>
int even(int n)
{
	int i,ans=0;

	for(i=1;i<=n;++i)
	{
			printf("%d\t",++i);
			ans = ans + i;
	}
	//printf("%d\t",ans);
	return ans;
}
int main()
{
	printf("hii pepole\n");
	int a;
	printf("enter your number:\n");
	scanf("%d",&a);
	printf("ypur even number sum:%d",even(a));
	printf("\n\nbyyyyyyy...\n");
}

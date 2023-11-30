#include <stdio.h>
int even(int n)
{
	int i,ans=0;

	for(i=1;i<=n;++i)
	{
	      //	if(i%2!=0)
	       //	{
			printf("%d\t",++i);
			ans = ans + i;
	       //	}
	}
	//printf("%d\t",ans);
	return ans;
}
int main()
{
	printf("hii pepole\n");
	int n;
	printf("enter your number:\n");
	scanf("%d",&n);
	printf("enter your namuber:%d",even(n));
	printf("\n\nbyyyyyyy...\n");
}

#include <stdio.h>
int main()
{
	int i=1,n,ans=1;
	
	printf("enter your value:\n");
	scanf("%d",&n);
	
  do{
		ans=ans*i;
		printf("%d\t",i);
		i++;
	}
	while(i<=n);
	    printf("\n%d",ans);
	
	
	return 0;

}
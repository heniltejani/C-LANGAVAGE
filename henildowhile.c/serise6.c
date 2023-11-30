#include <stdio.h>
int main()
{
	int i,n,temp=1,num=1;
	
	printf("enter your value:\n");
	scanf("%d",&n);
	
	i=1;
	
	do{
		num=i*temp;
		printf("%d , ",num);
		temp*=2;
		i++;
	}
	while(i<=n);
	return 0;
}
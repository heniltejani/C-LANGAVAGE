#include <stdio.h>
int main()
{
	int i,n;
	float pre,new;
	
	printf("enter your value:\n");
	scanf("%d",&n);
	
	pre=0.5;
	printf("%.1f\t",pre);
	
	for(i=1;i<=2*(n-1);i++)
	{
		if(i%2==1)
		{
			new=(pre+0.5*(i));
			printf("%.1f\t",new);
			pre=new;
		}
	}
	return 0;
	
	
}
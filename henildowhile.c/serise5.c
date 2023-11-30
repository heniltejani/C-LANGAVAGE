#include <stdio.h>
int main()
{
	int i,n;
	float pre,new;
	
	printf("enter your value:\n");
	scanf("%d",&n);
	
	pre=0.5;
	printf("%.2f\t",pre);
	i=1;
	
 do	{
		if(i%2==1)
		{
			new=(pre+0.5*(i));
			printf("%.2f\t",new);
			pre=new;
		}
		i++;
	}
	while(i<=2*(n-1));
	return 0;
}

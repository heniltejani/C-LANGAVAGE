#include <stdio.h>
void odd()
{
	int i,ans=0,n;

	printf("enter your value;\n");
	scanf("%d",&n);

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
void even()
{
	int i,ans=0,n;
	

	printf("\nenter your value:\n");
	scanf("%d",&n);

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

  

void serise()
{
	printf("\n\nyour sereise 1\n\n");
	
	
	int i,n;
	float pre,new;
	
	printf("\nenter your value:");
	scanf("%d",&n);
	
	pre=0.5;
	printf("%.2f\t ",pre);
	
	for(i=1;i<=2*(n-1);i++)
	{
		if(i%2==1)
		{
			new=pre+0.5*i;
			printf("%.2f\t",new);
			pre=new;
		}
	}printf("\n\n-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-");
}
int main()
{
	printf("hii pepole\n");
	odd();
	even();
	serise();
	printf("\n\nBYYYYYYYY...\n\n");
}


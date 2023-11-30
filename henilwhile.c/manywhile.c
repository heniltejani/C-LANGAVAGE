#include <stdio.h>
int main()
{
	int a =1;
	
		printf("\nprogram 1,1to5\n");
	
	while(a<=5)
	{
		printf("%d henil \n",a);
		a++;
	}
		
		printf("\nprogram 2,10to1\n");
		
	 a=10;
	
	while(a>0)
	{
			printf("%d\n",a);
			a--;
	}
	
		printf("\nprogram 3,51to100\n");
		
		a=51;
		
		while(a<=100)
		{

				printf("%d\t",a);
				a++;
		}
		
		
		printf("\nprogram 4,1ton\n");
		
		int i,n;
		
		printf("enter your value:\n");
		scanf("%d",&n);
		i=0;
		
		while(i<=n)
		{
				printf("%d\n",i);
				i++;
		}
		
		
		printf("\nprogram 5,-nton\n");
		
		printf("enter your value:\n");
		scanf("%d",&n);
		i=-n;
		
		while(i<=n)
		{
				printf("%d\t",i);
				i++;
		}
		
		
		printf("\nprogram 6,odd numberupto50\n");
		
		i=1;
		
		while(i<50)
		{
			printf("%d\n",i++);
			++i;
		}
		
		
		printf("\nprogram 7,even numberupto50\n");
		
		i=0;
		
		while(i<50)
		{
			printf("%d\t",i++);
			i++;
		}
		
		
		printf("\nprogram 8,AtoZ\n");
		
		i=65;
		
		while(i<=90)
		{
			printf("%c\t",i);
			i++;
		}
		printf("\nprogram 9,A-65toZ-90\n");
		
		i=65;
		
		while(i<=90)
		{
			printf("%c-%d\t",i,i);
			i++;
		}
		
		printf("\nprogram 10,A-atoZ-z\n");
		
		i=65;
		
		while(i<=90)
		{
			printf("%c-%c\t",i,i+32);
			i++;
		}
		
		printf("\nprogram 11,1to10sum\n");
		
		i=1;
		int ans=0;
		
		while(i<=10)
		{
				ans+=i;
				printf("%d\n",i);
				i++;
		}
		printf("%d\n",ans);
		
		printf("\nprogram 12,oddsum\n");
		
		printf("enter your value:\n");
		scanf("%d",&n);
		i=1;
		ans=0;
		
		while(i<=n)
		{
			printf("%d\t",i++);
			ans=ans+i;
			i++;
		}
		printf("%d\n",ans);
		
		printf("\nprogram 13,evensum\n");
		
		printf("enter your value:\n");
		scanf("%d",&n);
		i=1;
		ans=0;
		
		while(i<=n)
		{
			printf("%d\t",++i);
			ans=ans+i;
			++i;
		}
		printf("%d\n",ans);
		
	return 0;
}


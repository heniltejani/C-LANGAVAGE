#include <stdio.h>
int income(int salary)
{
	int total;
	float tex;

	

	if(salary>0&&salary<2500)
	{
		printf("your salary in tex 0 persntange\n");
	}
	if(salary>=2500&&salary<5000)
	{
		printf("your salary in tex 10 persntange\n");
		tex=salary/10;
		printf("your tex:%.2f\n",tex);
		total=salary-tex;
		printf("your total salary:%d\n",total);
	}
	if(salary>=5000&&salary<10000)
	{
		printf("your salary in tex 20 persntange\n");
		tex=salary/20;
		printf("your tex:%.2f\n",tex);
		total=salary-tex;
		printf("your total salary:%d\n",total);
	}
	if(salary>=10000)
	{
		printf("your salary in tex 30 persntange\n");
		tex=salary/30;
		printf("your tex:%.2f\n",tex);
		total=salary-tex;
		printf("your total salary:%d\n",total);
	}
	
}
int main()
{
	printf("\n\nhiii peple wel come\n\n");
	
	int n;
	
	printf("enter your salary:\n");
	scanf("%d",&n);
    income(n);
	printf("\n\nbyyyyyy....\n\n");
}
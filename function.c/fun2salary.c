#include <stdio.h>
int salary()
{
	int salary,total;
	float tex;

	printf("enter your salary:\n");
	scanf("%d",&salary);

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
		//printf("your total salary:%d\n",total);
	}
	if(salary>=5000&&salary<10000)
	{
		printf("your salary in tex 20 persntange\n");
		tex=salary/20;
		printf("your tex:%.2f\n",tex);
		total=salary-tex;
		//printf("your total salary:%d\n",total);
	}
	if(salary>=10000)
	{
		printf("your salary in tex 30 persntange\n");
		tex=salary/30;
		printf("your tex:%.2f\n",tex);
		total=salary-tex;
		//printf("your total salary:%d\n",total);
	}
	return total;
}
int main()
{
	printf("\n\nhiii peple wel come\n\n");
    printf("your total salary:%d",salary());
	printf("\n\nbyyyyyy....\n\n");
}
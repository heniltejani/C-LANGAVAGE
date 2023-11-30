#include <stdio.h>
float totalsalary(float salary)
{
	float hra,da,total;
	
	if(salary<=5000)
	{
		hra=salary*0.80;
		printf("your salary in hra:%.2f\n",hra);
		da=salary*0.20;
		printf("your salary in da:%.2f\n",da);
		total=salary+hra+da;
		printf("your total salary:%.2f\n",total);
	}
	else if(salary>5000&&salary<=10000)
	{
		hra=salary*0.12;
		printf("your salary in hra:%.2f\n",hra);
		da=salary*0.30;
		printf("your salary in da:%.2f\n",da);
		total=salary+hra+da;
		printf("your total salary:%.2f\n",total);
	}
	else if(salary>10000&&salary<=15000)
	{
		hra=salary*0.15;
		printf("your salary in hra:%.2f\n",hra);
		da=salary*0.40;
		printf("your salary in da:%.2f\n",da);
		total=salary+hra+da;
		printf("your total salary:%.2f\n",total);
	}
	else
	{
		hra=salary*0.20;
		printf("your salary in hra:%.2f\n",hra);
		da=salary*0.50;
		printf("your salary in da:%.2f\n",da);
		total=salary+hra+da;
		printf("your total salary:%.2f\n",total);
	}
}
int main()
{
	printf("hii pepole\n");
	float n;
	printf("enter your salary:\n");
	scanf("%f",&n);
	totalsalary(n);
	printf("byyyyyyy...\n");
}

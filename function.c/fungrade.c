#include <stdio.h>
void grade()
{
	int phy,maths,che,total;
	float per;

	printf("enter you phy marks\n");
	scanf("%d",&phy);

	printf("enter you maths marks\n");
	scanf("%d",&maths);

	printf("enter you che marks\n");
	scanf("%d",&che);

	total=phy+maths+che;
	printf("your total marks:%d\n",total);
	per=total/3;
	printf("your per:%.2f\n",per);

	if(per>=75)
	{
		printf("you have got A grade\n");
	}
	else if(per>=60&&per<75)
	{
		printf("you have got B grade\n");
	}
	else if(per>=45&&per<60)
	{
		printf("you have got C grade\n");
	}
	else if(per>=35&&per<45)
	{
		printf("you have got D grade\n");
	}
	else
	{
		printf("you have failde\n");
	}
}
int main()
{
	printf("\n\nhiii peple wel come\n\n");
    grade();
	printf("\n\nbyyyyyy....\n\n");
}
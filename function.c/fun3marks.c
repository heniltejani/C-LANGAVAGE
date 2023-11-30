#include <stdio.h>
int marks(int maths,int phy,int chemistry)
{
	int total,ortotal;


	if(maths>=65)
	{
		printf("stduent is maths pass\n");
	}
	if(phy>=55)
	{
		printf("stduent is phy pass\n");
	}
	if(chemistry>=50)
	{
		printf("stduent is chemistry pass\n");
	}
	if(total>=190)
	{
		total=maths+phy+chemistry;
		printf("stduent marks total:%d\n",total);
		printf("stduent is adimsson is pass\n");
	}
	if(ortotal>=140)
	{
		ortotal=maths+phy;
		printf("your maths and phy subject total:%d\n",ortotal);
		printf("stduent is adimsson is pass\n");
	}

	//return total;
}
int main()
{
	printf("\n\nhiii peple wel come\n\n");
	
	int a,b,c;
	
	printf("enter your maths marks:\n");
	scanf("%d",&a);

	printf("enter your phy marks:\n");
	scanf("%d",&b);

	printf("enter your chemietry marks:\n");
    scanf("%d",&c);
    marks(a,b,c);
	printf("\n\nbyyyyyy....\n\n");
}
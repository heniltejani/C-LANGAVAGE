#include <stdio.h>
int bill(int uint)
{
	//int uint;
	float bill,charge,total;


	if(uint<=100)
		
	{
		bill=uint*0.60;
		printf("%.2f\n",bill);
	}
	if((uint>100)&&(uint<=300))
	{
		bill=(100*0.60+(uint-100)*0.80);
		printf("%.2f\n",bill);
	}
	if(uint>300)
	{
		bill=100*0.60+200*0.80+(uint-300)*0.90;
		printf("uint of bill:%.2f\n",bill);
	}
	if(bill<50)
	{
		bill=50;
		printf("every people minmum bill total:%.2f\n",bill);
 
	}
	if(bill>300)
	{
		charge=bill*0.15;
		printf("bill in include charge:%.2f\n",charge);
		total =bill+charge;
		//printf("the total bill:%.2f\n",total);
	}
	return total;
}
int main()
{
	printf("\n\nhiii peple wel come\n\n");
	
	int n;
	
	printf("enter your uint:\n");
	scanf("%d",&n);
    
	printf("your total bill:%d",bill(n));
	printf("\n\nbyyyyyy....\n\n");
}
#include <stdio.h>
float sum()
{
	float i,j;
	
	printf("enter your 1 value:\n");
	scanf("%f",&i);
	
	printf("enter your 2 value:\n");
	scanf("%f",&j);
	
	return i/j;
	
	
}
int main()
{
	printf("hii pepole\n");
	printf("your number sum:%.2f\n",sum());
	printf("see you soon\n");
}
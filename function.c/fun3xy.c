#include <stdio.h>
void coordint(int x,int y)
{

	if(x>0&&y>0)
	{
		printf("this coordint is frist\n");
	}else if(x<0&&y>0)
	{
		printf("this coordint is second\n");
	}else if(x<0&&y<0)
	{
		printf("this coordint is third\n");
	}else
	{
		printf("this coordint is fourth\n");
	}
}
int main()
{
	printf("\n\nhiii peple wel come\n\n");
	int i,j;

	printf("enter X value\n");
	scanf("%d",&i);

	printf("enter Y value\n");
	scanf("%d",&j);
    coordint(i,j);
	printf("\n\nbyyyyyy....\n\n");
}

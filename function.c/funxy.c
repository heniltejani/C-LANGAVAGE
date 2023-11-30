#include <stdio.h>
void coordint()
{
	int x,y;

	printf("enter X value\n");
	scanf("%d",&x);

	printf("enter Y value\n");
	scanf("%d",&y);

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
    coordint();
	printf("\n\nbyyyyyy....\n\n");
}
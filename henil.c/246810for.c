#include <stdio.h>
int main()
{
	int i,j;
	
	for(i=2;i<=10;++i)
	{	
		for(j=1;j<5;j++)
		{	
			printf("%d\t",i);
		}
			printf("%d\n",i++);
	}
	return 0;
	
}
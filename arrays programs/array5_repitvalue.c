#include<stdio.h>
void main()
{
	int i,j,b,a[10],count;
	for(i=0;i<10;i++)
	{
		printf("enter a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		count=0;
		b=a[i];
		for(j=0;j<10;j++)
		{
			if(a[i]==a[j])
			{
				count+=1;
			}
		}
		printf("%d is %d times \n",a[i],count);
	}
	
}
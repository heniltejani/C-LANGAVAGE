#include<stdio.h>
void main()
{
	int a[20],zero[20],one[20],i,nz=0,no=0;
	for(i=0;i<=20;i++)
	{
		printf("enter a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	printf("zero = ");
	for(i=0;i<=20;i++)
	{
		if(a[i]==0)
		{
			nz+=1;
			zero[i]=a[i];
			printf("%d\t",zero[i]);
		}else
		{
			zero[i] = 9;
		}
	}
	printf("\n");
	printf("one =  ");
	for(i=0;i<20;i++)
	{
		if(a[i]==1)
		{
			no+=1;
			one[i]=a[i];
			printf("%d\t",one[i]);
		}
		else{
			one[i]=9;
		}
	}
	printf("\n total number of 0 in array = %d",nz);
	printf("\n total number of 1 in array = %d",no);
	
}
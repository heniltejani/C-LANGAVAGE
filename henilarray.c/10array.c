#include <stdio.h>
int main()
{
		int temp0=0,temp1=1,a[10],b[10],c[10],i;
		
		
		for(i<0;i<10;i++)
		{
			printf("enter the value:%d\t",i);
			scanf("%d",&a[i]);
		}
		for(i=0;i<10;i++)
		{
			if(a[i]==0)
			{
				temp0++;
				
			}
			else{
				
				temp1++;
			}
			
		}
		printf("no. of zero: %d & no. of ones %d\n", temp0,temp1);
		
		for(i=0;i<temp0;i++)
		{
			b[i]=0;
			printf("%d\t",b[i]);
		}
		for(i=0;i<temp1;i++)
		{
			c[i]=1;
			printf("%d\t",c[i]);
			
		}
return 0;
}
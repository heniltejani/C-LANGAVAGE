#include <stdio.h>
int main()
{
	int i,j,sub1[5],sub2[5],sub3[5],total[5],per[5];
	char grde[5];
	
	for(i=0;i<5;i++)
	{
	printf("enter the marks of maths for std%d:",i+1);
	scanf("%d",&sub1[i]);
	
	printf("enter the marks of eng for std%d:",i+1);
	scanf("%d",&sub2[i]);
	
	printf("enter the marks of chemistry for std%d:",i+1);
	scanf("%d",&sub3[i]);
	
	printf("\n\n");
	
	}
	
	for(i=0;i<5;i++)
	{
   		total[i] = sub1[i]+sub2[i]+sub3[i];
		printf("marks of totalsub:%d",total[i]);
		
		printf("\n\n");
	}
	for(i=0;i<5;i++)
	{
			per[i] = (total[i]*100)/300;
			printf("stduent per:%d",per[i]);
			
			printf("\n\n");
	}
	for(i=0;i<5;i++)
	{
		if(per[i]>=85&&per[i]<=100)
		{
			grde[i] = 'A';
			printf("stduent grde:%c\n",grde[i]);
		}
		else if(per[i]>=75&&per[i]<=85)
		{
			grde[i] = 'B';
			printf("stduent grde:%c\n",grde[i]);
		}
		else if(per[i]>=65&&per[i]<=75)
		{
			grde[i] = 'C';
			printf("stduent grde:%c\n",grde[i]);
		}
		else if(per[i]>=55&&per[i]<=65)
		{
			grde[i] = 'D';
			printf("stduent grde:%c\n",grde[i]);
		}
		else if(per[i]>=45&&per[i]<=55)
		{
			grde[i] = 'E';
			printf("stduent grde:%c\n",grde[i]);
		}
		else
		{
			printf("stduent is fail\n");
		}
	}
	return 0;
}

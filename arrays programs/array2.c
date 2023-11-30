#include<stdio.h>
void main()
{
	int sub1[5],sub2[5],sub3[5],total[5],per[5],b,a;
	printf("student 1 marks : \n ");
	for(b=0;b<5;b++)
	{
		printf("enter sub[%d] =",b+1);
		scanf("%d",&sub1[b]);
		
		printf("enter sub[%d] =",b+1);
		scanf("%d",&sub2[b]);
		
		printf("enter sub[%d] =",b+1);
		scanf("%d",&sub3[b]);
	}
	for(a=0;a<5;a++)
	{
		total[a]=sub1[a]+sub2[a]+sub3[a];
		per[a]=(total[a]*100)/300;
	}
	for(a=0;a<5;a++)
	{
		printf("per of student %d = %d \n ",a+1,per[a]);
	}
	for(a=0;a<5;a++)
	{
		if(per[a]>85)
		{
			printf("A grade \n");
		}
		else if(per[a]<85 && per[a]>75)
		{
			printf("B grade \n");
		}
		else if(per[a]<75 && per[a]>65)
		{
			printf("C grade\n");
		}
		else if(per[a]<65 && per[a]>55)
		{
			printf("D grade\n");
		}
		else if(per[a]<55 && per[a]>35)
		{
			printf("E grade\n");
		}
		else
		{
			printf("FAIL \n");
		}
	}
}
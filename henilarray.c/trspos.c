#include<stdio.h>
int main()
{ 
    int a[100][100],b[100][100],i,j,n;
	
	printf("enter matrix size : ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
	    for(j=0;j<n;j++)
        {
	      printf("enter element : ");
          scanf("%d",&a[i][j]);
   	    }
			printf("\n");
	}
			printf("\n\nyour matrix\n\n");

		  
	for(i=0;i<n;i++)
	{
			for(j=0;j<n;j++)
		{
		    
				printf("%d ",a[i][j]);
	
		}printf("\n");
	}
	printf("\n\nyour trspos matrix\n\n");
	printf("\ntranspose matrix : \n");
	for(i=0;i<n;i++)
	{
	     for(j=0;j<n;j++)    
		{
		    b[i][j]=a[j][i];    
	        printf("%d ",b[i][j]);
	
		}printf("\n");
	}  
	   return 0;
}
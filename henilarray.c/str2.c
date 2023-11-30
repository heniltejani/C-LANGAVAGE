#include <stdio.h> 
#include <string.h>
int main()
{
	char name[100],newnane[100],last,frist;
	int len,i,j;
	
	printf("enter your string:\n");
	scanf("%s",name);
	
	len = strlen(name);
	printf("%d \n",len);
	
	for(i=0;i<len/2;i++)
	{
		printf("%c\t",name[i]);
		printf("%c\t",name[(len-1)-i]);
		
	}
	if(len%2!=0)
	{
		printf("%c\t",name[i]);
	}
	return 0;
}



























/*#include <stdio.h>
#include <string.h>
int main() 
{
    char str[100];
    
   
    printf("Enter a string: ");
    scanf("%s", str);
    
    printf("%c", str[0]);
    
    int length = strlen(str);
    printf("%c", str[length - 1]);
    
    printf("%c", str[1en]);
    
    printf("%c", str[length - 2]);
    
    return 0;
}*/













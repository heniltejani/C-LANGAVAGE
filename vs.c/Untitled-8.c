#include <stdio.h>
int evenodd(int i)
{
   
    if(i%2==0)
    {
        goto even;  
    }
    else
    {  
        goto next;

    }
    even:
        printf("even number");
    next:
            printf("your value odd");
}
int main()
{
    int n;
     scanf("%d",&n);
    evenodd(n);
    
}
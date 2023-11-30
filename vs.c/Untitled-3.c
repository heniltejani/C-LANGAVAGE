#include <stdio.h>
int main()
{
    int myname = 10;
    int* ptr;
    ptr = &myname; 
    //int **p; 
    
    printf("%d\n", myname);

    printf("address of myname is: %p\n", &myname);

    printf("ponitr of myname is: %p\n",ptr);
    
    return 0;
}


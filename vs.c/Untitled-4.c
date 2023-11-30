#include <stdio.h>
int main()
{
    int myname = 10;
    int* ptr;
    ptr = &myname; 
    int **p; 
    
    printf("%d\n",myname);

    printf("address of myname is: %p\n", &myname);

    printf("pointer of myname is: %p\n",ptr);

    printf("pointer of the pointer of myname is: %p\n",p);
    
    return 0;
}


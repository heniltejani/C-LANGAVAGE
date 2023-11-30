#include <stdio.h>
int year(int month)
{
    switch (month)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("month have 31 days");
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("month have 30 days");
            break;
        case 2:
             printf("month have 28 days");
             break;
        default:
            printf("invalid month");
            break;
    }
}

int main()
{
    int n;
    printf("enter the month\n");
    scanf("%d",&n);
    year(n);
    return 0;
}
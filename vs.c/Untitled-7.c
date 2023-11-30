#include <stdio.h>
int main()
{
    int n = 1;

    for (int n = 0; n <= 10; n++)
    {
        if (n == 5)
        {
            continue;
        }
         printf("%d\n", n);

    }
    return 0;
}
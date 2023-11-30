#include <stdio.h>
int main()
{
    char buff[160];
    FILE *fp;
    fp = fopen("abc.txt", "r");

    while (fscanf(fp, "%s", buff) != EOF)
    {
        printf("%S\n", buff);
    }
    fclose(fp);
}
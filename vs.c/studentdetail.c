#include<stdio.h>
#include<string.h>
struct st
{
    int rn;
    char n[50];
    float per;
}s1,s2,s3,s4,s5;

int main()
{
    printf("enter bill no. :\n ");
    scanf("%d%d%d%d%d",&s1.rn,&s2.rn,&s3.rn,&s4.rn,&s5.rn);
    printf("enter name : \n");
    scanf("%s%s%s%s%s",&s1.n,&s2.n,&s3.n,&s4.n,&s5.n);
    printf("enter percentage : \n");
    scanf("%f%f%f%f%f",&s1.per,&s2.per,&s3.per,&s4.per,&s5.per);

    printf("Roll no.\tName\t\t Percentage\n");
    printf("%d\t\t%s\t\t%.2f\n",s1.rn,s1.n,s1.per);
    printf("%d\t\t%s\t\t%.2f\n",s2.rn,s2.n,s2.per);
    printf("%d\t\t%s\t\t%.2f\n",s3.rn,s3.n,s3.per);
    printf("%d\t\t%s\t\t%.2f\n",s4.rn,s4.n,s4.per);
    printf("%d\t\t%s\t\t%.2f\n",s5.rn,s5.n,s5.per);


    return 0;
}

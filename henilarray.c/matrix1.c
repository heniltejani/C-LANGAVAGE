//1. Write a program in C for adding two matrices of the same size.
#include<stdio.h>
int main() 
{
	int  rows, cols,i,j;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);
	
	int matrix1[rows][cols], matrix2[rows][cols], result[rows][cols];
	
    printf("FIRST MATRIX NUMBERRS:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("SECOUND MATRIX NUMBERS:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
	
    printf("YOUR MATRIX:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
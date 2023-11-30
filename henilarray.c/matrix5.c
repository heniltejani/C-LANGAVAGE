/*#include <stdio.h>

int main() {
    int n; 
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid matrix size. Please enter a positive integer.\n");
    }

    int matrix[n][n];
    int sum = 0,i,j;

    printf("Enter the elements of the matrix:\n");

    
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("Enter element at position (%d, %d): ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i >= j) {
                sum += matrix[i][j];
            }
        }
    }

    printf("Sum of the lower triangle elements: %d\n", sum);

    return 0;
}*/
#include <stdio.h>

int main() {
    int rows, cols;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    if (rows != cols) {
        printf("Matrix must be square (equal number of rows and columns).\n");
	}

    int matrix[rows][cols],i,j,sum=0;


    printf("Enter the number of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Enter numbers matrix[%d][%d]: ", j, i);
            scanf("%d", &matrix[j][i]);
        }
    }

    for (i = 0; i < rows; i++) {
        for (int j = i; j < cols; j++) {
            sum += matrix[j][i];
        }
    }
	
    printf("Sum of the upper triangle: %d\n", sum);

    return 0;
}
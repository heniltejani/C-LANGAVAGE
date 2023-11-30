//3.Write a program in C to find the sum of the right diagonals of a matrix.
#include <stdio.h>

int main() {
    int n;

    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid matrix size. Please enter a positive integer.\n");
    }

    int matrix[n][n],i,j,sum=0;
	
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (i = 0; i < n; i++) {
        sum += matrix[i][i];
    }

    printf("Sum of the right diagonal elements: %d\n", sum);

    return 0;
}
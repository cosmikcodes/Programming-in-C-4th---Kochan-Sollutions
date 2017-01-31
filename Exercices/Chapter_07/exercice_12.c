// Program to transpose any matrix and print to screen.

#include <stdio.h>


int main(void)
{
	// Declarations.
	void transposeMatrix(int i, int j, int matrix1[4][5], int matrix2[5][4]);
	void printMatrix(int i, int j, int matrix[i][j]);

	// Variables.
	int matrix1[4][5] = {{1, 2, 3, 4, 5},
			     {6, 7, 8, 9, 10},
	      		     {11, 12, 13, 14, 15},
			     {16, 17, 18, 19, 20}};
	int matrix2 [5][4];

	// Calls.
	transposeMatrix(4, 5, matrix1, matrix2);

	printf("\tMatrix 1\n");
	printMatrix(4, 5, matrix1);

	printf("\n\n");

	printf("\tMatrix 2\n");
	printMatrix(5, 4, matrix2);
	
    return 0;
}


// Function to transpose a matrix.
void transposeMatrix(int i, int j, int m1[i][j], int m2[j][i])
{
	for (int n = 0; n < i; ++n) {
		for (int m = 0; m < j; ++m) {
			m2[m][n] = m1[n][m];
		}
	}
}


// Function to print a matrix.
void printMatrix(int i, int j, int matrix[i][j])
{
	printf("---------------------------------\n");

	for (int k = 0; k < i; ++k) {
		for (int n = 0; n < j; ++n) {
			printf("%5i", matrix[k][n]);
		}
		
		printf("\n");
	}

	printf("---------------------------------\n");
}

#include <stdio.h>

void scalarMultiply(int row_m, int column_m, int matrix[3][5], int scalar);
void displayMatrix(int row_m, int column_m, int matrix[row_m][column_m]);

int main(void)
{
     int sampleMatrix[3][5] = {{7, 16, 55, 13, 12},
                               {12, 10, 52, 0, 7},
                               {-2, 1, 2, 4, 9}};

     printf("Original matrix:\n");
     displayMatrix(3, 5, sampleMatrix);
     
     scalarMultiply(3, 5, sampleMatrix, 2);

     printf("\nMultiplied by 2:\n");
     displayMatrix(3, 5, sampleMatrix);

     scalarMultiply(3, 5, sampleMatrix, -1);

     printf("\nThen multiplied by -1:\n");
     displayMatrix(3, 5, sampleMatrix);
     
     return 0;
}

// Function to multiply any array by a scalar.

void scalarMultiply(int row_m, int column_m, int matrix[3][5], int scalar)
{
     int row, column;

     for (row = 0; row < 3; ++row) {
          for (column = 0; column < 5; ++column) {
               matrix[row][column] *= scalar;
          }
     }
}

// Function to display the matrix(any size).

void displayMatrix(int row_m, int column_m, int matrix[row_m][column_m])
{
     int row, column;

     for (row = 0; row < row_m; ++row) {
          for (column = 0; column < column_m; ++column) {
               printf("%8i", matrix[row][column] );
          }

          printf("\n");
     }
}

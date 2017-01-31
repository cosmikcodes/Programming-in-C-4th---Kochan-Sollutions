// Program to sort an array of integers into ascending order.

#include <stdio.h>

void sort(int a[], int n);


int main(void)
{
     int i;
     int array[16] = {34, -5, 6, 0, 12, 100, 56, 22,
                      44, -3, -9, 12, 17, 22, 6, 11};

     printf("The array before the sort:\n");

     for (i = 0; i < 16; ++i) {
          printf("%i ", array[i]);
     }

     sort(array, 16);

     printf("\n\nThe array after sort: \n");

     for (i = 0; i < 16; ++i) {
          printf("%i ", array[i]);
     }

     printf("\n\n\n");

     return 0;
}

// Function to sort an array.
void sort(int a[], int n)
{
     int i, j, temp;

     for (i = 0; i < n - 1; ++i) {
          for (j = i + 1; j < n; ++j) {
               if (a[i] > a[j]) {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
               }
          }
     }
}

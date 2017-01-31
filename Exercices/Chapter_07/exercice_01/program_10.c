// Function to find the minimum value in an array.

#include <stdio.h>

int minimum(int values[], int numberOfElements);


int main(void)
{
     int array1[5] = {157, -54, 32, 41, 111};
     int array2[7] = {123, -24, 332, 241, 11, 142, 532};
     
     printf("array1 minimum: %i\n", minimum(array1, 5));
     printf("array2 minimum: %i\n", minimum(array2, 7));

     return 0;
}


// Function to determine the min value of an array.

int minimum(int values[], int numberOfElements)
{
     int minValue, i;
     minValue = values[0];

     for (i = 1; i < numberOfElements; ++i) {
          if (values[i] < minValue) {
               minValue = values[i];
          }
     }

     return minValue;
}

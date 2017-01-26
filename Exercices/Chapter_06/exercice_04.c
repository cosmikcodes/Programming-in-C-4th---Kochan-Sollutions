// Calculate the average of an array of 10 floating-point values.

#include <stdio.h>

int main(void)
{
     float numbers[10];
     float num, sum = 0;
     int i;
     
     // Set the numbers.
     
     printf("Set the nums: \n");
     
     for (i = 0; i < 10; ++i) {
          scanf("%f", &num);
          numbers[i] = num;
     }

     // Calculate the average.

     for (i = 0; i < 10; ++i) {
          sum += numbers[i];
     }

     printf("\n\nAverage = %.3f\n", sum / 10);

     return 0;
}

//  Program 5.10 modified to correct inefficiencies.

#include <stdio.h>

int main(void)
{
     int num, count;

     printf("2 ");
     
     for (num = 3; num < 50; num += 2) {
          count = 1;
          
          for (int div = 2; div < num-1; ++div) {
               if (num % div == 0) {
                    count = 0;
                    break;
               }
          }
          
          if (count) {
               printf("%i ", num);
          }
     }

     printf("\n");
     
     return 0;
}


// Fibonacci not using arrays.

#include <stdio.h>

int main(void)
{
     int first, second, fibonacci;
     
     first = 0;
     second = 1;

     printf("0 1 ");
     
     for (int i = 2; i < 15; ++i) {
          fibonacci = first + second;
          first = second;
          second = fibonacci;
          
          printf("%i ", fibonacci);
     }

     printf("\n");
     
     return 0;
}

#include <stdio.h>

long int x_to_the_n(int x, int n)
{
     long int result = 1;
     
     if (n == 0) {
          result = 1;
     }
     else {
          for (int i = 1; i <= n; ++i) {
               result *= x;
          }
     }

     return result;
}

int main(void)
{
     long int x_to_the_n(int x, int n);
     
     printf("x_to_the_n(2, 3) = %li\n", x_to_the_n(2, 3));
     printf("x_to_the_n(5, 2) = %li\n", x_to_the_n(5, 2));
     printf("x_to_the_n(10, 4) = %li\n", x_to_the_n(10, 4));
     
     return 0;
}

